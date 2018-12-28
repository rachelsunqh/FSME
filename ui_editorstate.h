/********************************************************************************
** Form generated from reading UI file 'editorstate.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORSTATE_H
#define UI_EDITORSTATE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorState
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLineEdit *nameField;
    QListView *outActions;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *moveOutUp;
    QToolButton *moveOutDown;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_4;
    QPlainTextEdit *commentField;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer_3;
    QToolButton *addOut;
    QToolButton *removeOut;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *moveInUp;
    QToolButton *moveInDown;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer;
    QToolButton *addIn;
    QToolButton *removeIn;
    QSpacerItem *verticalSpacer_2;
    QListView *availableActions;
    QListView *inActions;

    void setupUi(QWidget *EditorState)
    {
        if (EditorState->objectName().isEmpty())
            EditorState->setObjectName(QStringLiteral("EditorState"));
        EditorState->resize(903, 539);
        gridLayout_3 = new QGridLayout(EditorState);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        nameField = new QLineEdit(EditorState);
        nameField->setObjectName(QStringLiteral("nameField"));

        gridLayout->addWidget(nameField, 0, 0, 1, 7);

        outActions = new QListView(EditorState);
        outActions->setObjectName(QStringLiteral("outActions"));

        gridLayout->addWidget(outActions, 5, 5, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        moveOutUp = new QToolButton(EditorState);
        moveOutUp->setObjectName(QStringLiteral("moveOutUp"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveOutUp->setIcon(icon);

        horizontalLayout_3->addWidget(moveOutUp);

        moveOutDown = new QToolButton(EditorState);
        moveOutDown->setObjectName(QStringLiteral("moveOutDown"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveOutDown->setIcon(icon1);

        horizontalLayout_3->addWidget(moveOutDown);


        gridLayout->addLayout(horizontalLayout_3, 4, 6, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 3, 0, 1, 1);

        label_4 = new QLabel(EditorState);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 4, 3, 1, 1);

        commentField = new QPlainTextEdit(EditorState);
        commentField->setObjectName(QStringLiteral("commentField"));

        gridLayout->addWidget(commentField, 2, 0, 1, 7);

        label_3 = new QLabel(EditorState);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_6, 1, 0, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);

        addOut = new QToolButton(EditorState);
        addOut->setObjectName(QStringLiteral("addOut"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        addOut->setIcon(icon2);

        verticalLayout_10->addWidget(addOut);

        removeOut = new QToolButton(EditorState);
        removeOut->setObjectName(QStringLiteral("removeOut"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeOut->setIcon(icon3);

        verticalLayout_10->addWidget(removeOut);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);


        gridLayout->addLayout(verticalLayout_10, 5, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        moveInUp = new QToolButton(EditorState);
        moveInUp->setObjectName(QStringLiteral("moveInUp"));
        moveInUp->setIcon(icon);

        horizontalLayout->addWidget(moveInUp);

        moveInDown = new QToolButton(EditorState);
        moveInDown->setObjectName(QStringLiteral("moveInDown"));
        moveInDown->setIcon(icon1);

        horizontalLayout->addWidget(moveInDown);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

        label_5 = new QLabel(EditorState);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 4, 5, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);

        addIn = new QToolButton(EditorState);
        addIn->setObjectName(QStringLiteral("addIn"));
        addIn->setIcon(icon3);

        verticalLayout_9->addWidget(addIn);

        removeIn = new QToolButton(EditorState);
        removeIn->setObjectName(QStringLiteral("removeIn"));
        removeIn->setIcon(icon2);

        verticalLayout_9->addWidget(removeIn);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout_9, 5, 2, 1, 1);

        availableActions = new QListView(EditorState);
        availableActions->setObjectName(QStringLiteral("availableActions"));

        gridLayout->addWidget(availableActions, 5, 3, 1, 1);

        inActions = new QListView(EditorState);
        inActions->setObjectName(QStringLiteral("inActions"));

        gridLayout->addWidget(inActions, 5, 0, 1, 2);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(availableActions);
        label_3->setBuddy(inActions);
        label_5->setBuddy(outActions);
#endif // QT_NO_SHORTCUT

        retranslateUi(EditorState);
        QObject::connect(moveInUp, SIGNAL(clicked()), EditorState, SLOT(moveInUp()));
        QObject::connect(moveInDown, SIGNAL(clicked()), EditorState, SLOT(moveInDown()));
        QObject::connect(moveOutUp, SIGNAL(clicked()), EditorState, SLOT(moveOutUp()));
        QObject::connect(moveOutDown, SIGNAL(clicked()), EditorState, SLOT(moveOutDown()));
        QObject::connect(addIn, SIGNAL(clicked()), EditorState, SLOT(addIn()));
        QObject::connect(removeIn, SIGNAL(clicked()), EditorState, SLOT(removeIn()));
        QObject::connect(addOut, SIGNAL(clicked()), EditorState, SLOT(addOut()));
        QObject::connect(removeOut, SIGNAL(clicked()), EditorState, SLOT(removeOut()));

        QMetaObject::connectSlotsByName(EditorState);
    } // setupUi

    void retranslateUi(QWidget *EditorState)
    {
        EditorState->setWindowTitle(QApplication::translate("EditorState", "Form", nullptr));
        moveOutUp->setText(QString());
        moveOutDown->setText(QString());
        label_4->setText(QApplication::translate("EditorState", "&Available", nullptr));
        label_3->setText(QApplication::translate("EditorState", "&In", nullptr));
        addOut->setText(QString());
        removeOut->setText(QString());
        moveInUp->setText(QString());
        moveInDown->setText(QString());
        label_5->setText(QApplication::translate("EditorState", "&Out", nullptr));
        addIn->setText(QString());
        removeIn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EditorState: public Ui_EditorState {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORSTATE_H
