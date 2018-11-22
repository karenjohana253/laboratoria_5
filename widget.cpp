#include "widget.h"
#include "ui_widget.h"
#include "QSqlTableModel"
#include "QSqlError"
#include "QMessageBox"
#define ACCESS"DRIVER={Microsoft Access Driver (*.mdb)};"//"FIL={MS Access};DBQ=C:"//Users//familiar//Documents//Database1.mdb"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    mDatabase=QSqlDatabase::addDatabase("QODBC");
    mDatabase.setDatabaseName(ACCESS);

    if (!mDatabase.open());{
        QMessageBox::critical(this,"Error",mDatabase.lastError().text());
        return;
    }
    mModel=new QSqlTableModel(this);
    mModel->setTable("cartelera");
    mModel->select();
    ui->tableView->setModel(mModel);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_nuevo_clicked()
{
    mModel->insertRow(mModel->rowCount());
}

void Widget::on_eliminar_clicked()
{
    mModel->removeRow(ui->tableView->currentIndex().row());
}

void Widget::on_actualizar_clicked()
{
    mModel->select();
}
