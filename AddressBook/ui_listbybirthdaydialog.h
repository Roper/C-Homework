/********************************************************************************
** Form generated from reading UI file 'listbybirthdaydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTBYBIRTHDAYDIALOG_H
#define UI_LISTBYBIRTHDAYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_ListByBirthdayDialog
{
public:
    QSplitter *splitter;
    QLabel *birthdayLabel;
    QComboBox *birthdayComboBox;
    QSplitter *splitter_2;
    QPushButton *okPushButton;
    QPushButton *canclePushButton;

    void setupUi(QDialog *ListByBirthdayDialog)
    {
        if (ListByBirthdayDialog->objectName().isEmpty())
            ListByBirthdayDialog->setObjectName(QStringLiteral("ListByBirthdayDialog"));
        ListByBirthdayDialog->resize(400, 300);
        splitter = new QSplitter(ListByBirthdayDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(90, 120, 211, 20));
        splitter->setOrientation(Qt::Horizontal);
        birthdayLabel = new QLabel(splitter);
        birthdayLabel->setObjectName(QStringLiteral("birthdayLabel"));
        splitter->addWidget(birthdayLabel);
        birthdayComboBox = new QComboBox(splitter);
        birthdayComboBox->setObjectName(QStringLiteral("birthdayComboBox"));
        splitter->addWidget(birthdayComboBox);
        splitter_2 = new QSplitter(ListByBirthdayDialog);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(160, 230, 181, 23));
        splitter_2->setOrientation(Qt::Horizontal);
        okPushButton = new QPushButton(splitter_2);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));
        splitter_2->addWidget(okPushButton);
        canclePushButton = new QPushButton(splitter_2);
        canclePushButton->setObjectName(QStringLiteral("canclePushButton"));
        splitter_2->addWidget(canclePushButton);

        retranslateUi(ListByBirthdayDialog);

        QMetaObject::connectSlotsByName(ListByBirthdayDialog);
    } // setupUi

    void retranslateUi(QDialog *ListByBirthdayDialog)
    {
        ListByBirthdayDialog->setWindowTitle(QApplication::translate("ListByBirthdayDialog", "Dialog", Q_NULLPTR));
        birthdayLabel->setText(QApplication::translate("ListByBirthdayDialog", "\346\234\210\344\273\275", Q_NULLPTR));
        okPushButton->setText(QApplication::translate("ListByBirthdayDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        canclePushButton->setText(QApplication::translate("ListByBirthdayDialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListByBirthdayDialog: public Ui_ListByBirthdayDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTBYBIRTHDAYDIALOG_H
