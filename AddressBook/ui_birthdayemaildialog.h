/********************************************************************************
** Form generated from reading UI file 'birthdayemaildialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIRTHDAYEMAILDIALOG_H
#define UI_BIRTHDAYEMAILDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_BirthdayEmailDialog
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *BirthdayEmailDialog)
    {
        if (BirthdayEmailDialog->objectName().isEmpty())
            BirthdayEmailDialog->setObjectName(QStringLiteral("BirthdayEmailDialog"));
        BirthdayEmailDialog->resize(516, 415);
        gridLayout = new QGridLayout(BirthdayEmailDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(BirthdayEmailDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);


        retranslateUi(BirthdayEmailDialog);

        QMetaObject::connectSlotsByName(BirthdayEmailDialog);
    } // setupUi

    void retranslateUi(QDialog *BirthdayEmailDialog)
    {
        BirthdayEmailDialog->setWindowTitle(QApplication::translate("BirthdayEmailDialog", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BirthdayEmailDialog: public Ui_BirthdayEmailDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIRTHDAYEMAILDIALOG_H
