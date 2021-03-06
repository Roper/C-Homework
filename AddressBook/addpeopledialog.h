#ifndef ADDPEOPLEDIALOG_H
#define ADDPEOPLEDIALOG_H

#include <QDialog>

namespace Ui {
class AddPeopleDialog;
}

class AddPeopleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddPeopleDialog(QWidget *parent, int count);
    ~AddPeopleDialog();

private slots:
    void on_okPushButton_clicked();
    void on_relationBox_currentIndexChanged(int index);
    void on_cancelPushButton_clicked();

private:
    Ui::AddPeopleDialog *ui;
    int count;
};

#endif // ADDPEOPLEDIALOG_H
