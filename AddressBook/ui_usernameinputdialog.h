/********************************************************************************
** Form generated from reading UI file 'usernameinputdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERNAMEINPUTDIALOG_H
#define UI_USERNAMEINPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_UsernameInputDialog
{
public:
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QSplitter *splitter;
    QPushButton *okPushButton;
    QPushButton *canclePushButton;

    void setupUi(QDialog *UsernameInputDialog)
    {
        if (UsernameInputDialog->objectName().isEmpty())
            UsernameInputDialog->setObjectName(QStringLiteral("UsernameInputDialog"));
        UsernameInputDialog->resize(621, 182);
        nameLabel = new QLabel(UsernameInputDialog);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(70, 60, 91, 16));
        nameLineEdit = new QLineEdit(UsernameInputDialog);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(70, 90, 461, 20));
        splitter = new QSplitter(UsernameInputDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(410, 130, 191, 23));
        splitter->setOrientation(Qt::Horizontal);
        okPushButton = new QPushButton(splitter);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));
        splitter->addWidget(okPushButton);
        canclePushButton = new QPushButton(splitter);
        canclePushButton->setObjectName(QStringLiteral("canclePushButton"));
        splitter->addWidget(canclePushButton);

        retranslateUi(UsernameInputDialog);

        QMetaObject::connectSlotsByName(UsernameInputDialog);
    } // setupUi

    void retranslateUi(QDialog *UsernameInputDialog)
    {
        UsernameInputDialog->setWindowTitle(QApplication::translate("UsernameInputDialog", "Dialog", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("UsernameInputDialog", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\247\223\345\220\215", Q_NULLPTR));
        okPushButton->setText(QApplication::translate("UsernameInputDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        canclePushButton->setText(QApplication::translate("UsernameInputDialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UsernameInputDialog: public Ui_UsernameInputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERNAMEINPUTDIALOG_H
