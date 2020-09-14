#include "secondwindow.h"
#include "ui_secondwindow.h"
#include "cars.h"
#include <QFont>

QString brand_;
QString model_;
QString modification_;

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);

    file f;
    Car a;
    a = f.SendInformation(brand_, model_, modification_);
    ui->brand->setText(a.brand);
    QFont font1 = ui->brand->font();
    font1.setPointSize(12);
    ui->brand->setFont(font1);

    ui->model->setText(a.model);
    QFont font2 = ui->model->font();
    font2.setPointSize(12);
    ui->model->setFont(font2);

    ui->modification->setText(a.modification);
    ui->country->setText(a.country);
    ui->type_body->setText(a.type_body);
    ui->engine->setText(a.engine);
    ui->capacity->setText(a.capacity);
    ui->locate_cyl->setText(a.locate_cyl);
    ui->power->setText(a.power);
    ui->torque->setText(a.torque);
    ui->length->setText(a.length);
    ui->width->setText(a.width);
    ui->heigth->setText(a.height);
    ui->wheelbase->setText(a.wheelbase);
    ui->dynamic->setText(a.dynamic0to100);
    ui->fuel_consumpt->setText(a.fuel_consupt);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}
