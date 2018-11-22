#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{

    if(ui->rb1->isChecked())
      {
        QMessageBox::information(this,"Title",ui->rb1->text());
    }
    if(ui->rb2->isChecked())
      {
        QMessageBox::information(this,"Title",ui->rb2->text());
    }
    if(ui->rb3->isChecked())
      {
        QMessageBox::information(this,"Title",ui->rb3->text());
    }
    if(ui->rb4->isChecked())
      {
        QMessageBox::information(this,"Title",ui->rb4->text());
    }
    if(ui->rb5->isChecked())
      {
        QMessageBox::information(this,"Title",ui->rb5->text());
    }


}
