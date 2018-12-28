/********************************************************************************
** Form generated from reading UI file 'editorroot.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORROOT_H
#define UI_EDITORROOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorRoot
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *nameField;
    QLabel *label_2;
    QLineEdit *baseClassField;
    QLabel *label_3;
    QComboBox *initialStateCombo;
    QPlainTextEdit *commentField;

    void setupUi(QWidget *EditorRoot)
    {
        if (EditorRoot->objectName().isEmpty())
            EditorRoot->setObjectName(QStringLiteral("EditorRoot"));
        EditorRoot->resize(535, 256);
        verticalLayout = new QVBoxLayout(EditorRoot);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(EditorRoot);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        nameField = new QLineEdit(EditorRoot);
        nameField->setObjectName(QStringLiteral("nameField"));

        gridLayout->addWidget(nameField, 0, 1, 1, 1);

        label_2 = new QLabel(EditorRoot);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        baseClassField = new QLineEdit(EditorRoot);
        baseClassField->setObjectName(QStringLiteral("baseClassField"));

        gridLayout->addWidget(baseClassField, 1, 1, 1, 1);

        label_3 = new QLabel(EditorRoot);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        initialStateCombo = new QComboBox(EditorRoot);
        initialStateCombo->setObjectName(QStringLiteral("initialStateCombo"));

        gridLayout->addWidget(initialStateCombo, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        commentField = new QPlainTextEdit(EditorRoot);
        commentField->setObjectName(QStringLiteral("commentField"));

        verticalLayout->addWidget(commentField);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(nameField);
        label_2->setBuddy(baseClassField);
        label_3->setBuddy(initialStateCombo);
#endif // QT_NO_SHORTCUT

        retranslateUi(EditorRoot);

        QMetaObject::connectSlotsByName(EditorRoot);
    } // setupUi

    void retranslateUi(QWidget *EditorRoot)
    {
        EditorRoot->setWindowTitle(QApplication::translate("EditorRoot", "Form", nullptr));
        label->setText(QApplication::translate("EditorRoot", "&Name", nullptr));
        label_2->setText(QApplication::translate("EditorRoot", "&Base class", nullptr));
        label_3->setText(QApplication::translate("EditorRoot", "&Initial state", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorRoot: public Ui_EditorRoot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORROOT_H
