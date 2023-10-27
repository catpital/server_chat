#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
signals:
    void accepted();
    void rejected();

private slots:
    void on_actionexit_triggered();

    void on_pushButton_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_lineEdit_editingFinished();

    void on_lineEdit_2_editingFinished();

    void on_actionadmin_mode_triggered();

    void on_actioncheck_messages_triggered();

    void on_actionhelp_triggered();

   // void on_pushButton_2_toggled(bool checked);

    //void on_pushButton_2_clicked();

    void on_pushButton_clicked(bool checked);

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_stackedWidget_currentChanged(int arg1);

    void on_check_user_ban_clicked();

private:
    Ui::MainWindow *ui;



};
