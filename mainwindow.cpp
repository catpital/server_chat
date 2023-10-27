#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
QString login="l";
QString pass="p";
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)


{

    ui->setupUi(this);
    ui->frame_login_adm->setVisible(false);
    ui->stackedWidget->setCurrentIndex(0);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionexit_triggered()
{
QApplication::quit();
}


void MainWindow::on_pushButton_clicked()
{
//QWidget::hide(); QFrame *FN ;
//FN = ui->FrameName;
//FN->setVisible(false);
//QWidget::show();
ui->frame_login_adm->setVisible(true);
ui->stackedWidget->setCurrentIndex(1);
//QtFrame::frame_login_adm->enabled(true);
// visible admin login box frame_login_adm
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{

}


void MainWindow::on_lineEdit_editingFinished()
{

login=ui->lineEdit->text();

}


void MainWindow::on_lineEdit_2_editingFinished()
{
pass=ui->lineEdit_2->text();

}


void MainWindow::on_actionadmin_mode_triggered()
{

}


void MainWindow::on_actioncheck_messages_triggered()
{

}


void MainWindow::on_actionhelp_triggered()
{

}



bool check=false;
void MainWindow::on_pushButton_clicked(bool checked)
{
ui->pushButton->setCheckable(1);
if(check)
        check=false;
else check=true;
ui->frame_login_adm->setVisible(check);

}


void MainWindow::on_buttonBox_accepted()
{
if (login=="login" && pass=="pass")
{
        QMessageBox::information(this, "yes", "Sacsess!");
        ui->pushButton->setChecked(true);
        ui->pushButton->setEnabled(false);
ui->stackedWidget->setCurrentIndex(2);
}
else {QMessageBox::warning(this, "Not", "Not acsess");}


emit accepted();
}


void MainWindow::on_buttonBox_rejected()
{
emit rejected();
}


void MainWindow::on_stackedWidget_currentChanged(int arg1)
{

}


void MainWindow::on_check_user_ban_clicked()
{
if (ui->check_user_ban->isChecked()){
//time=ui->bantime->Item();
//QString mytext=QString("You Set ban to time %1").arg(ui->bantimeitem);
QMessageBox::information(this, "yes", "mytext");

}
}

