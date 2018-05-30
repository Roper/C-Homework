/********************************************************************************
** Form generated from reading UI file 'addpeopledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPEOPLEDIALOG_H
#define UI_ADDPEOPLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPeopleDialog
{
public:
    QComboBox *relationBox;
    QLabel *label;
    QLabel *label_4;
    QDateEdit *birthdayDateEdit;
    QSplitter *splitter;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QSplitter *splitter_2;
    QLabel *changableLabel;
    QLineEdit *specialEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;
    QSplitter *splitter_3;
    QLabel *phoneLabel;
    QLineEdit *phoneEdit;
    QSplitter *splitter_4;
    QLabel *emailLabel;
    QLineEdit *emailEdit;

    void setupUi(QDialog *AddPeopleDialog)
    {
        if (AddPeopleDialog->objectName().isEmpty())
            AddPeopleDialog->setObjectName(QStringLiteral("AddPeopleDialog"));
        AddPeopleDialog->resize(430, 319);
        relationBox = new QComboBox(AddPeopleDialog);
        relationBox->setObjectName(QStringLiteral("relationBox"));
        relationBox->setGeometry(QRect(60, 40, 120, 21));
        label = new QLabel(AddPeopleDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(61, 21, 120, 16));
        label_4 = new QLabel(AddPeopleDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 130, 41, 16));
        birthdayDateEdit = new QDateEdit(AddPeopleDialog);
        birthdayDateEdit->setObjectName(QStringLiteral("birthdayDateEdit"));
        birthdayDateEdit->setGeometry(QRect(120, 130, 110, 22));
        splitter = new QSplitter(AddPeopleDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(70, 90, 251, 21));
        splitter->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QStringLiteral("label_2"));
        splitter->addWidget(label_2);
        nameEdit = new QLineEdit(splitter);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        splitter->addWidget(nameEdit);
        splitter_2 = new QSplitter(AddPeopleDialog);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(70, 230, 251, 20));
        splitter_2->setOrientation(Qt::Horizontal);
        changableLabel = new QLabel(splitter_2);
        changableLabel->setObjectName(QStringLiteral("changableLabel"));
        splitter_2->addWidget(changableLabel);
        specialEdit = new QLineEdit(splitter_2);
        specialEdit->setObjectName(QStringLiteral("specialEdit"));
        splitter_2->addWidget(specialEdit);
        layoutWidget = new QWidget(AddPeopleDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 270, 158, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        okPushButton = new QPushButton(layoutWidget);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(layoutWidget);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);

        splitter_3 = new QSplitter(AddPeopleDialog);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(70, 160, 251, 20));
        splitter_3->setOrientation(Qt::Horizontal);
        phoneLabel = new QLabel(splitter_3);
        phoneLabel->setObjectName(QStringLiteral("phoneLabel"));
        splitter_3->addWidget(phoneLabel);
        phoneEdit = new QLineEdit(splitter_3);
        phoneEdit->setObjectName(QStringLiteral("phoneEdit"));
        splitter_3->addWidget(phoneEdit);
        splitter_4 = new QSplitter(AddPeopleDialog);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setGeometry(QRect(70, 190, 251, 20));
        splitter_4->setOrientation(Qt::Horizontal);
        emailLabel = new QLabel(splitter_4);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));
        splitter_4->addWidget(emailLabel);
        emailEdit = new QLineEdit(splitter_4);
        emailEdit->setObjectName(QStringLiteral("emailEdit"));
        splitter_4->addWidget(emailEdit);

        retranslateUi(AddPeopleDialog);

        QMetaObject::connectSlotsByName(AddPeopleDialog);
    } // setupUi

    void retranslateUi(QDialog *AddPeopleDialog)
    {
        AddPeopleDialog->setWindowTitle(QApplication::translate("AddPeopleDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("AddPeopleDialog", "\350\257\267\351\200\211\346\213\251\344\270\216\350\201\224\347\263\273\344\272\272\347\232\204\345\205\263\347\263\273", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddPeopleDialog", "\347\224\237\346\227\245", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddPeopleDialog", "\345\247\223\345\220\215", Q_NULLPTR));
        changableLabel->setText(QString());
        okPushButton->setText(QApplication::translate("AddPeopleDialog", "\345\245\275", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("AddPeopleDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        phoneLabel->setText(QApplication::translate("AddPeopleDialog", "\347\224\265\350\257\235", Q_NULLPTR));
        emailLabel->setText(QApplication::translate("AddPeopleDialog", "Email", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddPeopleDialog: public Ui_AddPeopleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPEOPLEDIALOG_H
