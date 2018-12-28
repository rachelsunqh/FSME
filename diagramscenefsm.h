#include <QVariant>
#include <QQueue>
#include <QPair>
#include <QLoggingCategory>
Q_DECLARE_LOGGING_CATEGORY(DiagramSceneFSMLogging)

class DiagramSceneFSM {
public:
    enum State {
        AddingState,
        AddingTransition,
        ChooseSource,
        EnterStateName,
        Normal
    };

    enum Event {
        AddState,
        AddTransition,
        Cancel,
        MouseMove,
        MousePress,
        MouseRelease,
        NameEntered
    };

    class Delegate {
    public:
        virtual bool isPointingToState(const QVariantMap& params) const = 0;
        virtual bool isStartingFromState(const QVariantMap& params) const = 0;

        virtual void acceptEvent(const QVariantMap& params) = 0;
        virtual void addNameField(const QVariantMap& params) = 0;
        virtual void addState(const QVariantMap& params) = 0;
        virtual void addTransition(const QVariantMap& params) = 0;
        virtual void removeNameField(const QVariantMap& params) = 0;
        virtual void removePreviewArrow(const QVariantMap& params) = 0;
        virtual void selectState(const QVariantMap& params) = 0;
        virtual void setPointerToArrow(const QVariantMap& params) = 0;
        virtual void setPointerToCross(const QVariantMap& params) = 0;
        virtual void showPreviewArrow(const QVariantMap& params) = 0;
        virtual void updatePreviewArrow(const QVariantMap& params) = 0;
    };

    State currentState() const;
    Delegate* delegate;
    QQueue<QPair<Event, QVariantMap> > eventQueue;


    DiagramSceneFSM(Delegate * delegate);
    void processEvent(Event event, const QVariantMap& params);
    static QString eventName(Event event);
    static QString stateName(State s);

private:
    void processEventInternal(Event event, const QVariantMap& params);
    State _currentState;
};
