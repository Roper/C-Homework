/********************************************************************************
** Form generated from reading UI file 'finddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDIALOG_H
#define UI_FINDDIALOG_H

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

class Ui_findDialog
{
public:
    QSplitter *splitter;
    QPushButton *okPushButton;
    QPushButton *canclePushButton;
    QSplitter *splitter_2;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;

    void setupUi(QDialog *findDialog)
    {
        if (findDialog->objectName().isEmpty())
            findDialog->setObjectName(QStringLiteral("findDialog"));
        findDialog->resize(400, 300);
        splitter = new QSplitter(findDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(190, 250, 161, 23));
        splitter->setOrientation(Qt::Horizontal);
        okPushButton = new QPushButton(splitter);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));
        splitter->addWidget(okPushButton);
        canclePushButton = new QPushButton(splitter);
        canclePushButton->setObjectName(QStringLiteral("canclePushButton"));
        splitter->addWidget(canclePushButton);
        splitter_2 = new QSplitter(findDialog);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(60, 120, 261, 20));
        splitter_2->setOrientation(Qt::Horizontal);
        nameLabel = new QLabel(splitter_2);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        splitter_2->addWidget(nameLabel);
        nameLineEdit = new QLineEdit(splitter_2);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        splitter_2->addWidget(nameLineEdit);

        retranslateUi(findDialog);

        QMetaObject::connectSlotsByName(findDialog);
    } // setupUi

    void retranslateUi(QDialog *findDialog)
    {
        findDialog->setWindowTitle(QApplication::translate("findDialog", "Dialog", Q_NULLPTR));
        okPushButton->setText(QApplication::translate("findDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        canclePushButton->setText(QApplication::translate("findDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("findDialog", "\345\247\223\345\220\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class findDialog: public Ui_findDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDIALOG_H
