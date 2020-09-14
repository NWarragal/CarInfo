#include "addnew.h"
#include "ui_addnew.h"
#include "cars.h"
#include <QPushButton>

AddNew::AddNew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNew)
{
    ui->setupUi(this);

    connect(ui->buttonBox->button(QDialogButtonBox::Save),SIGNAL(clicked(bool)),SLOT(saveClicked()));
    connect(ui->buttonBox->button(QDialogButtonBox::Cancel),SIGNAL(clicked(bool)), SLOT(close()));
}

void AddNew::saveClicked()
{
    while(1){
         Car mod;
         mod.brand = ui->brand->text();
         mod.model = ui->model->text();
         mod.modification = ui->modification->text();
         mod.country = ui->country->text();
         mod.type_body = ui->type_body->text();
         mod.engine = ui->engine->text();
         mod.capacity = ui->capacity->text();
         mod.locate_cyl = ui->locate_cyl->text();
         mod.power = ui->power->text();
         mod.torque = ui->torque->text();
         mod.length = ui->length->text();
         mod.width = ui->width->text();
         mod.height = ui->heigth->text();
         mod.wheelbase = ui->wheelbase->text();
         mod.dynamic0to100 = ui->dynamic->text();
         mod.fuel_consupt = ui->fuel_consump->text();
         mod.brand = mod.brand.split(" ")[0];
         mod.model = mod.model.split(" ")[0];
         mod.modification = mod.modification.split(" ")[0];
         mod.country = mod.country.split(" ")[0];
         mod.type_body = mod.type_body.split(" ")[0];
         mod.engine = mod.engine.split(" ")[0];
         mod.capacity = mod.capacity.split(" ")[0];
         mod.locate_cyl = mod.locate_cyl.split(" ")[0];
         mod.power = mod.power.split(" ")[0];
         mod.torque = mod.torque.split(" ")[0];
         mod.length = mod.length.split(" ")[0];
         mod.width = mod.width.split(" ")[0];
         mod.height = mod.height.split(" ")[0];
         mod.wheelbase = mod.wheelbase.split(" ")[0];
         mod.dynamic0to100 = mod.dynamic0to100.split(" ")[0];
         mod.fuel_consupt = mod.fuel_consupt.split(" ")[0];
         if(mod.brand != nullptr && mod.model != nullptr && mod.modification != nullptr && mod.country != nullptr && mod.type_body != nullptr
                 && mod.engine != nullptr && mod.capacity != nullptr && mod.locate_cyl != nullptr && mod.power != nullptr
                 && mod.torque != nullptr && mod.length != nullptr && mod.width != nullptr && mod.height != nullptr
                 && mod.wheelbase != nullptr && mod.dynamic0to100 != nullptr && mod.fuel_consupt != nullptr){
             file f;
             f.WriteFile(mod);
             break;
         }
         QMessageBox::warning(this, "Error", "Not fully writed, or there is mistake");
         break;
    }
    close();
}

AddNew::~AddNew()
{
    delete ui;
}
