/********************************************************************************
** Form generated from reading UI file 'editortransition.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORTRANSITION_H
#define UI_EDITORTRANSITION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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
#include "textedit.h"

QT_BEGIN_NAMESPACE

class Ui_EditorTransition
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *nameField;
    QPlainTextEdit *commentField;
    QGridLayout *gridLayout_2;
    QListView *availableActions;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *verticalSpacer_7;
    QToolButton *removeAction;
    QToolButton *addAction;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *moveActionUp;
    QToolButton *moveActionDown;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *moveTransitionUp;
    QToolButton *moveTransitionDown;
    TextEdit *conditionField;
    QLabel *label_7;
    QComboBox *transitionTypeField;
    QListView *actionList;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QComboBox *destinationField;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QComboBox *transiteDestinationField;

    void setupUi(QWidget *EditorTransition)
    {
        if (EditorTransition->objectName().isEmpty())
            EditorTransition->setObjectName(QStringLiteral("EditorTransition"));
        EditorTransition->resize(860, 527);
        verticalLayout = new QVBoxLayout(EditorTransition);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        nameField = new QLineEdit(EditorTransition);
        nameField->setObjectName(QStringLiteral("nameField"));

        verticalLayout->addWidget(nameField);

        commentField = new QPlainTextEdit(EditorTransition);
        commentField->setObjectName(QStringLiteral("commentField"));

        verticalLayout->addWidget(commentField);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(0);
        availableActions = new QListView(EditorTransition);
        availableActions->setObjectName(QStringLiteral("availableActions"));

        gridLayout_2->addWidget(availableActions, 1, 7, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_7);

        removeAction = new QToolButton(EditorTransition);
        removeAction->setObjectName(QStringLiteral("removeAction"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeAction->setIcon(icon);

        verticalLayout_11->addWidget(removeAction);

        addAction = new QToolButton(EditorTransition);
        addAction->setObjectName(QStringLiteral("addAction"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        addAction->setIcon(icon1);

        verticalLayout_11->addWidget(addAction);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_8);


        gridLayout_2->addLayout(verticalLayout_11, 1, 6, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        moveActionUp = new QToolButton(EditorTransition);
        moveActionUp->setObjectName(QStringLiteral("moveActionUp"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveActionUp->setIcon(icon2);

        horizontalLayout_5->addWidget(moveActionUp);

        moveActionDown = new QToolButton(EditorTransition);
        moveActionDown->setObjectName(QStringLiteral("moveActionDown"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveActionDown->setIcon(icon3);

        horizontalLayout_5->addWidget(moveActionDown);


        gridLayout_2->addLayout(horizontalLayout_5, 0, 5, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        moveTransitionUp = new QToolButton(EditorTransition);
        moveTransitionUp->setObjectName(QStringLiteral("moveTransitionUp"));
        moveTransitionUp->setIcon(icon2);

        horizontalLayout_4->addWidget(moveTransitionUp);

        moveTransitionDown = new QToolButton(EditorTransition);
        moveTransitionDown->setObjectName(QStringLiteral("moveTransitionDown"));
        moveTransitionDown->setIcon(icon3);

        horizontalLayout_4->addWidget(moveTransitionDown);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 2, 1, 1);

        conditionField = new TextEdit(EditorTransition);
        conditionField->setObjectName(QStringLiteral("conditionField"));

        gridLayout_2->addWidget(conditionField, 1, 0, 1, 3);

        label_7 = new QLabel(EditorTransition);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_7, 0, 7, 1, 1);

        transitionTypeField = new QComboBox(EditorTransition);
        transitionTypeField->addItem(QString());
        transitionTypeField->addItem(QString());
        transitionTypeField->addItem(QString());
        transitionTypeField->setObjectName(QStringLiteral("transitionTypeField"));

        gridLayout_2->addWidget(transitionTypeField, 0, 0, 1, 1);

        actionList = new QListView(EditorTransition);
        actionList->setObjectName(QStringLiteral("actionList"));

        gridLayout_2->addWidget(actionList, 1, 3, 1, 3);

        label_6 = new QLabel(EditorTransition);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 4, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_8 = new QLabel(EditorTransition);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_6->addWidget(label_8);

        destinationField = new QComboBox(EditorTransition);
        destinationField->setObjectName(QStringLiteral("destinationField"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(destinationField->sizePolicy().hasHeightForWidth());
        destinationField->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(destinationField);


        horizontalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_9 = new QLabel(EditorTransition);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_7->addWidget(label_9);

        transiteDestinationField = new QComboBox(EditorTransition);
        transiteDestinationField->setObjectName(QStringLiteral("transiteDestinationField"));
        sizePolicy.setHeightForWidth(transiteDestinationField->sizePolicy().hasHeightForWidth());
        transiteDestinationField->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(transiteDestinationField);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout->addLayout(horizontalLayout_8);

#ifndef QT_NO_SHORTCUT
        label_8->setBuddy(destinationField);
        label_9->setBuddy(transiteDestinationField);
#endif // QT_NO_SHORTCUT

        retranslateUi(EditorTransition);
        QObject::connect(moveActionUp, SIGNAL(clicked()), EditorTransition, SLOT(moveActionUp()));
        QObject::connect(moveActionDown, SIGNAL(clicked()), EditorTransition, SLOT(moveActionDown()));
        QObject::connect(removeAction, SIGNAL(clicked()), EditorTransition, SLOT(removeAction()));
        QObject::connect(addAction, SIGNAL(clicked()), EditorTransition, SLOT(addAction()));
        QObject::connect(moveTransitionUp, SIGNAL(clicked()), EditorTransition, SLOT(moveTransitionUp()));
        QObject::connect(moveTransitionDown, SIGNAL(clicked()), EditorTransition, SLOT(moveTransitionDown()));
        QObject::connect(destinationField, SIGNAL(activated(QString)), EditorTransition, SLOT(setDestination(QString)));

        QMetaObject::connectSlotsByName(EditorTransition);
    } // setupUi

    void retranslateUi(QWidget *EditorTransition)
    {
        EditorTransition->setWindowTitle(QApplication::translate("EditorTransition", "Form", nullptr));
        removeAction->setText(QString());
        addAction->setText(QString());
        moveActionUp->setText(QString());
        moveActionDown->setText(QString());
        moveTransitionUp->setText(QString());
        moveTransitionDown->setText(QString());
        label_7->setText(QApplication::translate("EditorTransition", "Available", nullptr));
        transitionTypeField->setItemText(0, QApplication::translate("EditorTransition", "Simple", nullptr));
        transitionTypeField->setItemText(1, QApplication::translate("EditorTransition", "Transite", nullptr));
        transitionTypeField->setItemText(2, QApplication::translate("EditorTransition", "Return", nullptr));

        label_6->setText(QApplication::translate("EditorTransition", "In", nullptr));
        label_8->setText(QApplication::translate("EditorTransition", "&Simple", nullptr));
        label_9->setText(QApplication::translate("EditorTransition", "&Transite", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorTransition: public Ui_EditorTransition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORTRANSITION_H
