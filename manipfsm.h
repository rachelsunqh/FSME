#include <QVariant>
#include <QQueue>
#include <QPair>
#include <QLoggingCategory>
Q_DECLARE_LOGGING_CATEGORY(ManipFSMLogging)

class ManipFSM {
public:
    enum State {
        Idle,
        LineSelected,
        MovePoint,
        PointSelected
    };

    enum Event {
        MouseMoved,
        MousePressed,
        MouseReleased
    };

    class Delegate {
    public:
        virtual bool isDragPosReached(const QVariantMap& params) const = 0;
        virtual bool isNearLine(const QVariantMap& params) const = 0;
        virtual bool isNearPoint(const QVariantMap& params) const = 0;

        virtual void addPoint(const QVariantMap& params) = 0;
        virtual void calculateLineIndex(const QVariantMap& params) = 0;
        virtual void calculatePointIndex(const QVariantMap& params) = 0;
        virtual void movePoint(const QVariantMap& params) = 0;
        virtual void optimize(const QVariantMap& params) = 0;
    };

    State currentState() const;
    Delegate* delegate;
    QQueue<QPair<Event, QVariantMap> > eventQueue;


    ManipFSM(Delegate * delegate);
    void processEvent(Event event, const QVariantMap& params);
    static QString eventName(Event event);
    static QString stateName(State s);

private:
    void processEventInternal(Event event, const QVariantMap& params);
    State _currentState;
};
