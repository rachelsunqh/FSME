#include "manipfsm.h"
#include <QtDebug>
Q_LOGGING_CATEGORY(ManipFSMLogging, "fsm.ManipFSM")

ManipFSM::ManipFSM(ManipFSM::Delegate* aDelegate)
    : delegate(aDelegate), _currentState(Idle)
{
}

void ManipFSM::processEventInternal(ManipFSM::Event event, const QVariantMap& params)
{
    qCDebug(ManipFSMLogging) << "- event " << eventName(event) << ", params:" << params;

    switch (_currentState) {
    case ManipFSM::Idle:
        // point selected
        if (event == ManipFSM::MousePressed && delegate->isNearPoint(params)) {
            qCDebug(ManipFSMLogging) << " - Idle -> PointSelected: point selected";
            _currentState = ManipFSM::PointSelected;
            qCDebug(ManipFSMLogging) << "   - output:calculatePointIndex()";
            delegate->calculatePointIndex(params);
            break;
        }
        // line selected
        else if (event == ManipFSM::MousePressed && delegate->isNearLine(params)) {
            qCDebug(ManipFSMLogging) << " - Idle -> LineSelected: line selected";
            _currentState = ManipFSM::LineSelected;
            qCDebug(ManipFSMLogging) << "   - output:calculateLineIndex()";
            delegate->calculateLineIndex(params);
            break;
        }
        else {
            qCDebug(ManipFSMLogging) << "- Idle: impasse with event" << eventName( event );
        }
        break;
    case ManipFSM::LineSelected:
        // nothing to do
        if (event == ManipFSM::MouseReleased) {
            qCDebug(ManipFSMLogging) << " - LineSelected -> Idle: nothing to do";
            _currentState = ManipFSM::Idle;
            break;
        }
        // stay
        else if (event == ManipFSM::MouseMoved && !delegate->isDragPosReached(params)) {
            break;
        }
        // add point
        else if (event == ManipFSM::MouseMoved && delegate->isDragPosReached(params)) {
            qCDebug(ManipFSMLogging) << "   - output:addPoint()";
            delegate->addPoint(params);
            qCDebug(ManipFSMLogging) << " - LineSelected -> MovePoint: add point";
            _currentState = ManipFSM::MovePoint;
            break;
        }
        else {
            qCDebug(ManipFSMLogging) << "- LineSelected: impasse with event" << eventName( event );
        }
        break;
    case ManipFSM::MovePoint:
        // move point
        if (event == ManipFSM::MouseMoved) {
            qCDebug(ManipFSMLogging) << "   - output:movePoint()";
            delegate->movePoint(params);
            break;
        }
        // release
        else if (event == ManipFSM::MouseReleased) {
            qCDebug(ManipFSMLogging) << "   - output:optimize()";
            delegate->optimize(params);
            qCDebug(ManipFSMLogging) << " - MovePoint -> Idle: release";
            _currentState = ManipFSM::Idle;
            break;
        }
        else {
            qCDebug(ManipFSMLogging) << "- MovePoint: impasse with event" << eventName( event );
        }
        break;
    case ManipFSM::PointSelected:
        // release
        if (event == ManipFSM::MouseReleased) {
            qCDebug(ManipFSMLogging) << " - PointSelected -> Idle: release";
            _currentState = ManipFSM::Idle;
            break;
        }
        // stay
        else if (event == ManipFSM::MouseMoved && !delegate->isDragPosReached(params)) {
            break;
        }
        // move
        else if (event == ManipFSM::MouseMoved && delegate->isDragPosReached(params)) {
            qCDebug(ManipFSMLogging) << " - PointSelected -> MovePoint: move";
            _currentState = ManipFSM::MovePoint;
            break;
        }
        else {
            qCDebug(ManipFSMLogging) << "- PointSelected: impasse with event" << eventName( event );
        }
        break;
    }
}

void ManipFSM::processEvent(ManipFSM::Event event, const QVariantMap& params)
{
    bool __empty = eventQueue.isEmpty();

    eventQueue.enqueue(qMakePair(event, params));
    if (__empty) {
        while (!eventQueue.isEmpty()) {
            QPair<Event, QVariantMap> item = eventQueue.head();
            processEventInternal(item.first, item.second);
            eventQueue.dequeue();
        }
    }
}

QString ManipFSM::eventName(ManipFSM::Event event)
{
    switch (event) {
    case MouseMoved:
        return QString::fromLatin1("MouseMoved");
    case MousePressed:
        return QString::fromLatin1("MousePressed");
    case MouseReleased:
        return QString::fromLatin1("MouseReleased");
    }
    return QString::fromLatin1("Unknown");
}

QString ManipFSM::stateName(ManipFSM::State state)
{
    switch (state) {
    case Idle:
        return QString::fromLatin1("Idle");
    case LineSelected:
        return QString::fromLatin1("LineSelected");
    case MovePoint:
        return QString::fromLatin1("MovePoint");
    case PointSelected:
        return QString::fromLatin1("PointSelected");
    }
    return QString::fromLatin1("Unknown");
}

ManipFSM::State ManipFSM::currentState() const
{
    return _currentState;
}
