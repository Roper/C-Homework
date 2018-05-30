/********************************************************************************
** Form generated from reading UI file 'listbyrelationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTBYRELATIONDIALOG_H
#define UI_LISTBYRELATIONDIALOG_H

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

class Ui_ListByRelationDialog
{
public:
    QSplitter *splitter;
    QLabel *relationLabel;
    QComboBox *relationComboBox;
    QSplitter *splitter_2;
    QPushButton *okPushButton;
    QPushButton *canclePushButton;

    void setupUi(QDialog *ListByRelationDialog)
    {
        if (ListByRelationDialog->objectName().isEmpty())
            ListByRelationDialog->setObjectName(QStringLiteral("ListByRelationDialog"));
        ListByRelationDialog->resize(397, 271);
        splitter = new QSplitter(ListByRelationDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(90, 100, 221, 20));
        splitter->setOrientation(Qt::Horizontal);
        relationLabel = new QLabel(splitter);
        relationLabel->setObjectName(QStringLiteral("relationLabel"));
        splitter->addWidget(relationLabel);
        relationComboBox = new QComboBox(splitter);
        relationComboBox->setObjectName(QStringLiteral("relationComboBox"));
        splitter->addWidget(relationComboBox);
        splitter_2 = new QSplitter(ListByRelationDialog);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(160, 220, 171, 23));
        splitter_2->setOrientation(Qt::Horizontal);
        okPushButton = new QPushButton(splitter_2);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));
        splitter_2->addWidget(okPushButton);
        canclePushButton = new QPushButton(splitter_2);
        canclePushButton->setObjectName(QStringLiteral("canclePushButton"));
        splitter_2->addWidget(canclePushButton);

        retranslateUi(ListByRelationDialog);

        QMetaObject::connectSlotsByName(ListByRelationDialog);
    } // setupUi

    void retranslateUi(QDialog *ListByRelationDialog)
    {
        ListByRelationDialog->setWindowTitle(QApplication::translate("ListByRelationDialog", "Dialog", Q_NULLPTR));
        relationLabel->setText(QApplication::translate("ListByRelationDialog", "\345\205\263\347\263\273", Q_NULLPTR));
        okPushButton->setText(QApplication::translate("ListByRelationDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        canclePushButton->setText(QApplication::translate("ListByRelationDialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListByRelationDialog: public Ui_ListByRelationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTBYRELATIONDIALOG_H
