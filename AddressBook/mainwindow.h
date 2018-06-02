#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QModelIndex>
#include <QSqlQueryModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void queryWithCondition(QString condition);

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void fresh();
    void findByName(QString name);
    void findByRelation(QString name);
    void findByMonth(int month);
    void changUsername(QString name);

    void on_actionAdd_A_triggered();
    void on_actionDelete_D_triggered();
    void on_actionFind_F_triggered();
    void on_actionBirthday_B_triggered();
    void on_actionName_N_triggered();
    void on_actionRelationship_triggered();
    void on_actionBirthday_triggered();
    void on_actionBirthday_B_2_triggered();
    void on_actionEdit_E_triggered();
    void on_actionHome_H_triggered();

    void on_actionChange_Username_triggered();

private:
    Ui::MainWindow *ui;
    QSqlQueryModel *model;
    QString queryString;
    QString userName;
    int count;
    int showSpecial;
};

#endif // MAINWINDOW_H
