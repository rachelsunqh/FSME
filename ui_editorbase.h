/********************************************************************************
** Form generated from reading UI file 'editorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORBASE_H
#define UI_EDITORBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorBase
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *nameField;
    QPlainTextEdit *commentField;

    void setupUi(QWidget *EditorBase)
    {
        if (EditorBase->objectName().isEmpty())
            EditorBase->setObjectName(QStringLiteral("EditorBase"));
        EditorBase->resize(400, 300);
        verticalLayout = new QVBoxLayout(EditorBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nameField = new QLineEdit(EditorBase);
        nameField->setObjectName(QStringLiteral("nameField"));

        verticalLayout->addWidget(nameField);

        commentField = new QPlainTextEdit(EditorBase);
        commentField->setObjectName(QStringLiteral("commentField"));

        verticalLayout->addWidget(commentField);


        retranslateUi(EditorBase);

        QMetaObject::connectSlotsByName(EditorBase);
    } // setupUi

    void retranslateUi(QWidget *EditorBase)
    {
        EditorBase->setWindowTitle(QApplication::translate("EditorBase", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorBase: public Ui_EditorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORBASE_H
