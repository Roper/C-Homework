/********************************************************************************
** Form generated from reading UI file 'editdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDIALOG_H
#define UI_EDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_EditDialog
{
public:
    QTextBrowser *textBrowser;
    QPushButton *birthdayCardPushButton;
    QSplitter *splitter_7;
    QPushButton *okPushButton;
    QPushButton *canclePushButton;
    QSplitter *splitter_4;
    QLabel *birthdayLabel;
    QLineEdit *birthdayLineEdit;
    QSplitter *splitter_3;
    QLabel *telLabel;
    QLineEdit *telLineEdit;
    QSplitter *splitter_5;
    QLabel *specialLabel;
    QLineEdit *specialLineEdit;
    QSplitter *splitter_2;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QSplitter *splitter;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QSplitter *splitter_6;
    QLabel *relationLabel;
    QComboBox *relationComboBox;

    void setupUi(QDialog *EditDialog)
    {
        if (EditDialog->objectName().isEmpty())
            EditDialog->setObjectName(QStringLiteral("EditDialog"));
        EditDialog->resize(417, 438);
        textBrowser = new QTextBrowser(EditDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 270, 351, 121));
        birthdayCardPushButton = new QPushButton(EditDialog);
        birthdayCardPushButton->setObjectName(QStringLiteral("birthdayCardPushButton"));
        birthdayCardPushButton->setGeometry(QRect(30, 220, 121, 23));
        splitter_7 = new QSplitter(EditDialog);
        splitter_7->setObjectName(QStringLiteral("splitter_7"));
        splitter_7->setGeometry(QRect(210, 400, 171, 23));
        splitter_7->setOrientation(Qt::Horizontal);
        okPushButton = new QPushButton(splitter_7);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));
        splitter_7->addWidget(okPushButton);
        canclePushButton = new QPushButton(splitter_7);
        canclePushButton->setObjectName(QStringLiteral("canclePushButton"));
        splitter_7->addWidget(canclePushButton);
        splitter_4 = new QSplitter(EditDialog);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setGeometry(QRect(60, 44, 251, 20));
        splitter_4->setOrientation(Qt::Horizontal);
        birthdayLabel = new QLabel(splitter_4);
        birthdayLabel->setObjectName(QStringLiteral("birthdayLabel"));
        splitter_4->addWidget(birthdayLabel);
        birthdayLineEdit = new QLineEdit(splitter_4);
        birthdayLineEdit->setObjectName(QStringLiteral("birthdayLineEdit"));
        splitter_4->addWidget(birthdayLineEdit);
        splitter_3 = new QSplitter(EditDialog);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(60, 113, 251, 20));
        splitter_3->setOrientation(Qt::Horizontal);
        telLabel = new QLabel(splitter_3);
        telLabel->setObjectName(QStringLiteral("telLabel"));
        splitter_3->addWidget(telLabel);
        telLineEdit = new QLineEdit(splitter_3);
        telLineEdit->setObjectName(QStringLiteral("telLineEdit"));
        splitter_3->addWidget(telLineEdit);
        splitter_5 = new QSplitter(EditDialog);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setGeometry(QRect(60, 182, 251, 20));
        splitter_5->setOrientation(Qt::Horizontal);
        specialLabel = new QLabel(splitter_5);
        specialLabel->setObjectName(QStringLiteral("specialLabel"));
        splitter_5->addWidget(specialLabel);
        specialLineEdit = new QLineEdit(splitter_5);
        specialLineEdit->setObjectName(QStringLiteral("specialLineEdit"));
        splitter_5->addWidget(specialLineEdit);
        splitter_2 = new QSplitter(EditDialog);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(60, 147, 251, 20));
        splitter_2->setOrientation(Qt::Horizontal);
        emailLabel = new QLabel(splitter_2);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));
        splitter_2->addWidget(emailLabel);
        emailLineEdit = new QLineEdit(splitter_2);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        splitter_2->addWidget(emailLineEdit);
        splitter = new QSplitter(EditDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(60, 10, 251, 20));
        splitter->setOrientation(Qt::Horizontal);
        nameLabel = new QLabel(splitter);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        splitter->addWidget(nameLabel);
        nameLineEdit = new QLineEdit(splitter);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        splitter->addWidget(nameLineEdit);
        splitter_6 = new QSplitter(EditDialog);
        splitter_6->setObjectName(QStringLiteral("splitter_6"));
        splitter_6->setGeometry(QRect(60, 79, 191, 20));
        splitter_6->setOrientation(Qt::Horizontal);
        relationLabel = new QLabel(splitter_6);
        relationLabel->setObjectName(QStringLiteral("relationLabel"));
        splitter_6->addWidget(relationLabel);
        relationComboBox = new QComboBox(splitter_6);
        relationComboBox->setObjectName(QStringLiteral("relationComboBox"));
        splitter_6->addWidget(relationComboBox);

        retranslateUi(EditDialog);

        QMetaObject::connectSlotsByName(EditDialog);
    } // setupUi

    void retranslateUi(QDialog *EditDialog)
    {
        EditDialog->setWindowTitle(QApplication::translate("EditDialog", "Dialog", Q_NULLPTR));
        birthdayCardPushButton->setText(QApplication::translate("EditDialog", "\350\264\272\345\215\241\347\224\237\346\210\220", Q_NULLPTR));
        okPushButton->setText(QApplication::translate("EditDialog", "\347\241\256\350\256\244", Q_NULLPTR));
        canclePushButton->setText(QApplication::translate("EditDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        birthdayLabel->setText(QApplication::translate("EditDialog", "\347\224\237\346\227\245", Q_NULLPTR));
        telLabel->setText(QApplication::translate("EditDialog", "Tel", Q_NULLPTR));
        specialLabel->setText(QApplication::translate("EditDialog", "Special", Q_NULLPTR));
        emailLabel->setText(QApplication::translate("EditDialog", "Email", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("EditDialog", "\345\247\223\345\220\215", Q_NULLPTR));
        relationLabel->setText(QApplication::translate("EditDialog", "\345\205\263\347\263\273", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditDialog: public Ui_EditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDIALOG_H
