#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
#include "addnew.h"
#include "cars.h"
#include <QPushButton>
#include <QMessageBox>
#include <QPixmap>
#include <QTimer>

file f;
extern QString brand_;
extern QString model_;
extern QString modification_;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QVector<QString> first;
    first = f.FindBrand();
    ui->brands->addItem("N/A");
    for(int i = 0; i < first.size(); i++){
        ui->brands->addItem(first.at(i));
        }
    }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton answer = QMessageBox::question(this, "Quit", "Are you sure to exit?",
                                                                QMessageBox::Yes | QMessageBox::No);

    if(answer==QMessageBox::Yes){
        QApplication::quit();
    }
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->modifications->currentText() != "N/A" && ui->brands->currentText() != "N/A" && ui->models->currentText() != "N/A"){
        brand_ = ui->brands->currentText();
        model_ = ui->models->currentText();
        modification_ = ui->modifications->currentText();
        SecondWindow window;
        window.setModal(true);
        window.exec();
    }
    if(ui->modifications->currentText() == "N/A" || ui->brands->currentText() == "N/A" || ui->models->currentText() == "N/A"){
                 QMessageBox::warning(this, "Error", "Not all information chosen!");
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    AddNew window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_brands_currentTextChanged(const QString &arg1)
{
    ui->models->clear();
    if(ui->brands->currentText() != "N/A"){
        QVector<QString> second;
        second = f.FindModel(ui->brands->currentText());
        ui->models->addItem("N/A");
        for(int i = 0; i < second.size(); i++){
            ui->models->addItem(second.at(i));
        }
    }
    arg1;
}

void MainWindow::on_models_currentTextChanged(const QString &arg1)
{
    ui->modifications->clear();
    if(ui->models->currentText() != "N/A" && ui->models->currentText() != nullptr){
        QVector<QString> third;
        third = f.FindModification(ui->models->currentText());
        ui->modifications->addItem("N/A");
        for(int i = 0; i < third.size(); i++){
            ui->modifications->addItem(third.at(i));
        }
    }
    arg1;
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->brands->clear();
    QVector<QString> fourth;
    fourth = f.FindBrand();
    ui->brands->addItem("N/A");
    for(int i = 0; i < fourth.size(); i++){
        ui->brands->addItem(fourth.at(i));
        }
}
