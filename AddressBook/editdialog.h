#ifndef EDITDIALOG_H
#define EDITDIALOG_H

#include <QDialog>

namespace Ui {
class EditDialog;
}

class EditDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditDialog(QWidget *parent, int id, QString name, int year, int month, int day,
                        QString relation, QString tel, QString emailAddr, QString special, QString userName);
    //explicit EditDialog(QWidget *parent = 0, QString name = "", int year = 0, int month = 0, int day = 0,
    //                    QString relation = "", QString tel = "", QString emailAddr = "", QString special = "");
    ~EditDialog();

private slots:
    void on_canclePushButton_clicked();
    void on_relationComboBox_currentIndexChanged(int index);
    void on_okPushButton_clicked();
    void on_birthdayCardPushButton_clicked();

private:
    Ui::EditDialog *ui;
    int id;
    QString username;
};

#endif // EDITDIALOG_H
