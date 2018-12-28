#include "diagramscenefsm.h"
#include <QtDebug>
Q_LOGGING_CATEGORY(DiagramSceneFSMLogging, "fsm.DiagramSceneFSM")

DiagramSceneFSM::DiagramSceneFSM(DiagramSceneFSM::Delegate* aDelegate)
    : delegate(aDelegate), _currentState(Normal)
{
}

void DiagramSceneFSM::processEventInternal(DiagramSceneFSM::Event event, const QVariantMap& params)
{
    qCDebug(DiagramSceneFSMLogging) << "- event " << eventName(event) << ", params:" << params;

    switch (_currentState) {
    case DiagramSceneFSM::AddingState:
        // added
        if (event == DiagramSceneFSM::MousePress) {
            qCDebug(DiagramSceneFSMLogging) << " - AddingState -> EnterStateName: added";
            _currentState = DiagramSceneFSM::EnterStateName;
            qCDebug(DiagramSceneFSMLogging) << "   - output:addNameField()";
            delegate->addNameField(params);
            qCDebug(DiagramSceneFSMLogging) << "   - output:setPointerToArrow()";
            delegate->setPointerToArrow(params);
            break;
        }
        // cancel
        else if (event == DiagramSceneFSM::Cancel) {
            qCDebug(DiagramSceneFSMLogging) << " - AddingState -> Normal: cancel";
            _currentState = DiagramSceneFSM::Normal;
            qCDebug(DiagramSceneFSMLogging) << "   - output:setPointerToArrow()";
            delegate->setPointerToArrow(params);
            break;
        }
        else {
            qCDebug(DiagramSceneFSMLogging) << "- AddingState: impasse with event" << eventName( event );
        }
        break;
    case DiagramSceneFSM::AddingTransition:
        // update
        if (event == DiagramSceneFSM::MouseMove) {
            qCDebug(DiagramSceneFSMLogging) << "   - output:updatePreviewArrow()";
            delegate->updatePreviewArrow(params);
            break;
        }
        // add
        else if (event == DiagramSceneFSM::MousePress && delegate->isPointingToState(params)) {
            qCDebug(DiagramSceneFSMLogging) << "   - output:removePreviewArrow()";
            delegate->removePreviewArrow(params);
            qCDebug(DiagramSceneFSMLogging) << "   - output:addTransition()";
            delegate->addTransition(params);
            qCDebug(DiagramSceneFSMLogging) << "   - output:acceptEvent()";
            delegate->acceptEvent(params);
            qCDebug(DiagramSceneFSMLogging) << " - AddingTransition -> Normal: add";
            _currentState = DiagramSceneFSM::Normal;
            qCDebug(DiagramSceneFSMLogging) << "   - output:setPointerToArrow()";
            delegate->setPointerToArrow(params);
            break;
        }
        // miss
        else if (event == DiagramSceneFSM::MousePress) {
            qCDebug(DiagramSceneFSMLogging) << "   - output:removePreviewArrow()";
            delegate->removePreviewArrow(params);
            qCDebug(DiagramSceneFSMLogging) << " - AddingTransition -> Normal: miss";
            _currentState = DiagramSceneFSM::Normal;
            qCDebug(DiagramSceneFSMLogging) << "   - output:setPointerToArrow()";
            delegate->setPointerToArrow(params);
            break;
        }
        // cancel
        else if (event == DiagramSceneFSM::Cancel) {
            qCDebug(DiagramSceneFSMLogging) << "   - output:removePreviewArrow()";
            delegate->removePreviewArrow(params);
            qCDebug(DiagramSceneFSMLogging) << "   - output:acceptEvent()";
            delegate->acceptEvent(params);
            qCDebug(DiagramSceneFSMLogging) << " - AddingTransition -> Normal: cancel";
            _currentState = DiagramSceneFSM::Normal;
            qCDebug(DiagramSceneFSMLogging) << "   - output:setPointerToArrow()";
            delegate->setPointerToArrow(params);
            break;
        }
        else {
            qCDebug(DiagramSceneFSMLogging) << "- AddingTransition: impasse with event" << eventName( event );
        }
        break;
    case DiagramSceneFSM::ChooseSource:
        // pointed
        if (event == DiagramSceneFSM::MousePress && delegate->isPointingToState(params)) {
            qCDebug(DiagramSceneFSMLogging) << "   - output:selectState()";
            delegate->selectState(params);
            qCDebug(DiagramSceneFSMLogging) << " - ChooseSource -> AddingTransition: pointed";
            _currentState = DiagramSceneFSM::AddingTransition;
            qCDebug(DiagramSceneFSMLogging) << "   - output:showPreviewArrow()";
            delegate->showPreviewArrow(params);
            break;
        }
        // miss
        else if (event == DiagramSceneFSM::MousePress) {
            qCDebug(DiagramSceneFSMLogging) << " - ChooseSource -> Normal: miss";
            _currentState = DiagramSceneFSM::Normal;
            qCDebug(DiagramSceneFSMLogging) << "   - output:setPointerToArrow()";
            delegate->setPointerToArrow(params);
            break;
        }
        // cancel
        else if (event == DiagramSceneFSM::Cancel) {
            qCDebug(DiagramSceneFSMLogging) << "   - output:acceptEvent()";
            delegate->acceptEvent(params);
            qCDebug(DiagramSceneFSMLogging) << " - ChooseSource -> Normal: cancel";
            _currentState = DiagramSceneFSM::Normal;
            qCDebug(DiagramSceneFSMLogging) << "   - output:setPointerToArrow()";
            delegate->setPointerToArrow(params);
            break;
        }
        else {
            qCDebug(DiagramSceneFSMLogging) << "- ChooseSource: impasse with event" << eventName( event );
        }
        break;
    case DiagramSceneFSM::EnterStateName:
        // entered
        if (event == DiagramSceneFSM::NameEntered) {
            qCDebug(DiagramSceneFSMLogging) << "   - output:addState()";
            delegate->addState(params);
            qCDebug(DiagramSceneFSMLogging) << "   - output:removeNameField()";
            delegate->removeNameField(params);
            qCDebug(DiagramSceneFSMLogging) << " - EnterStateName -> Normal: entered";
            _currentState = DiagramSceneFSM::Normal;
            qCDebug(DiagramSceneFSMLogging) << "   - output:setPointerToArrow()";
            delegate->setPointerToArrow(params);
            break;
        }
        // cancel
        else if (event == DiagramSceneFSM::Cancel) {
            qCDebug(DiagramSceneFSMLogging) << "   - output:acceptEvent()";
            delegate->acceptEvent(params);
            qCDebug(DiagramSceneFSMLogging) << "   - output:removeNameField()";
            delegate->removeNameField(params);
            qCDebug(DiagramSceneFSMLogging) << " - EnterStateName -> Normal: cancel";
            _currentState = DiagramSceneFSM::Normal;
            qCDebug(DiagramSceneFSMLogging) << "   - output:setPointerToArrow()";
            delegate->setPointerToArrow(params);
            break;
        }
        // press
        else if (event == DiagramSceneFSM::MousePress) {
            qCDebug(DiagramSceneFSMLogging) << "   - output:acceptEvent()";
            delegate->acceptEvent(params);
            qCDebug(DiagramSceneFSMLogging) << "   - output:removeNameField()";
            delegate->removeNameField(params);
            qCDebug(DiagramSceneFSMLogging) << " - EnterStateName -> Normal: press";
            _currentState = DiagramSceneFSM::Normal;
            qCDebug(DiagramSceneFSMLogging) << "   - output:setPointerToArrow()";
            delegate->setPointerToArrow(params);
            break;
        }
        else {
            qCDebug(DiagramSceneFSMLogging) << "- EnterStateName: impasse with event" << eventName( event );
        }
        break;
    case DiagramSceneFSM::Normal:
        // add state
        if (event == DiagramSceneFSM::AddState) {
            qCDebug(DiagramSceneFSMLogging) << " - Normal -> AddingState: add state";
            _currentState = DiagramSceneFSM::AddingState;
            qCDebug(DiagramSceneFSMLogging) << "   - output:setPointerToCross()";
            delegate->setPointerToCross(params);
            break;
        }
        // add transition
        else if (event == DiagramSceneFSM::AddTransition && delegate->isStartingFromState(params)) {
            qCDebug(DiagramSceneFSMLogging) << "   - output:setPointerToCross()";
            delegate->setPointerToCross(params);
            qCDebug(DiagramSceneFSMLogging) << " - Normal -> AddingTransition: add transition";
            _currentState = DiagramSceneFSM::AddingTransition;
            qCDebug(DiagramSceneFSMLogging) << "   - output:showPreviewArrow()";
            delegate->showPreviewArrow(params);
            break;
        }
        // choose source state
        else if (event == DiagramSceneFSM::AddTransition) {
            qCDebug(DiagramSceneFSMLogging) << " - Normal -> ChooseSource: choose source state";
            _currentState = DiagramSceneFSM::ChooseSource;
            qCDebug(DiagramSceneFSMLogging) << "   - output:setPointerToCross()";
            delegate->setPointerToCross(params);
            break;
        }
        else {
            qCDebug(DiagramSceneFSMLogging) << "- Normal: impasse with event" << eventName( event );
        }
        break;
    }
}

void DiagramSceneFSM::processEvent(DiagramSceneFSM::Event event, const QVariantMap& params)
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

QString DiagramSceneFSM::eventName(DiagramSceneFSM::Event event)
{
    switch (event) {
    case AddState:
        return QString::fromLatin1("AddState");
    case AddTransition:
        return QString::fromLatin1("AddTransition");
    case Cancel:
        return QString::fromLatin1("Cancel");
    case MouseMove:
        return QString::fromLatin1("MouseMove");
    case MousePress:
        return QString::fromLatin1("MousePress");
    case MouseRelease:
        return QString::fromLatin1("MouseRelease");
    case NameEntered:
        return QString::fromLatin1("NameEntered");
    }
    return QString::fromLatin1("Unknown");
}

QString DiagramSceneFSM::stateName(DiagramSceneFSM::State state)
{
    switch (state) {
    case AddingState:
        return QString::fromLatin1("AddingState");
    case AddingTransition:
        return QString::fromLatin1("AddingTransition");
    case ChooseSource:
        return QString::fromLatin1("ChooseSource");
    case EnterStateName:
        return QString::fromLatin1("EnterStateName");
    case Normal:
        return QString::fromLatin1("Normal");
    }
    return QString::fromLatin1("Unknown");
}

DiagramSceneFSM::State DiagramSceneFSM::currentState() const
{
    return _currentState;
}
