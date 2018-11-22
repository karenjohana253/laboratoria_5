#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>
#include "QSqlTableModel"


namespace Ui {
class Widget;
}

class QSqlTableModel;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_nuevo_clicked();

    void on_eliminar_clicked();

    void on_actualizar_clicked();

private:
    Ui::Widget *ui;
    QSqlTableModel *mModel;
    QSqlDatabase mDatabase;
};

#endif // WIDGET_H
