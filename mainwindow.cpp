#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tGroup->setId(ui->bus, 0);
    ui->tGroup->setId(ui->passenger, 1);
    ui->tGroup->setId(ui->cargo, 2);
    ui->tGroup->setId(ui->trailer, 3);

    connect(ui->Show1, SIGNAL(clicked()), this, SLOT(showWarehouse1()));
    connect(ui->Show2, SIGNAL(clicked()), this, SLOT(showWarehouse2()));
    connect(ui->Save1, SIGNAL(clicked()), this, SLOT(saveWarehouse1()));
    connect(ui->Save2, SIGNAL(clicked()), this, SLOT(saveWarehouse2()));

    ui->name->setMaxLength(30);
    ui->engineCapacity->setMaximum(30);
    ui->engineCapacity->setMinimum(0.5);
    ui->capacity->setMaximum(300);
    ui->capacity->setMinimum(1);
    ui->loadCapacity->setMaximum(5000);
    ui->loadCapacity->setMinimum(100);
    ui->maxSpeed->setMaximum(320);
    ui->maxSpeed->setMinimum(60);
    ui->accelerationTo100->setMaximum(120);
    ui->accelerationTo100->setMinimum(5);
    ui->count->setMaximum(1000);
    ui->count->setMinimum(0);
    ui->price->setMaximum(3000);
    ui->price->setMinimum(20);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showBasicAttributes(){
    if (ui->tGroup->checkedId() == 3){
        ui->engineCapacity->setVisible(false);
        ui->maxSpeed->setVisible(false);
        ui->capacity->setVisible(false);
        ui->accelerationTo100->setVisible(false);
        ui->climateControl->setVisible(false);
    }
    else{
        ui->engineCapacity->setVisible(true);
        ui->maxSpeed->setVisible(true);
        ui->capacity->setVisible(true);
        ui->accelerationTo100->setVisible(true);
        ui->climateControl->setVisible(true);
    }
}

void MainWindow::saveWarehouse1(){
    isRecord1 = true;
    Warehouse& record = firstWarehouse;

    record.setName(ui->name->text());
    record.setType(ui->tGroup->checkedId());

    if (ui->tGroup->checkedId() != 3){
        record.setEC(ui->engineCapacity->value());
        record.setMS(ui->maxSpeed->value());
        record.setCapacity(ui->capacity->value());
        record.setAcceleration(ui->accelerationTo100->value());
        record.setClimContr(ui->climateControl->isChecked());
    }

    record.setLC(ui->loadCapacity->value());
    record.setPrice(ui->price->value());
    record.setCount(ui->count->value());
    record.setDelivery(ui->delivery->date());

}

void MainWindow::saveWarehouse2(){
    isRecord2 =true;
    Warehouse& record2 = secondWarehouse;

    record2.setName(ui->name->text());
    record2.setType(ui->tGroup->checkedId());

    if (ui->tGroup->checkedId() != 3){
        record2.setEC(ui->engineCapacity->value());
        record2.setMS(ui->maxSpeed->value());
        record2.setCapacity(ui->capacity->value());
        record2.setAcceleration(ui->accelerationTo100->value());
        record2.setClimContr(ui->climateControl->isChecked());
    }

    record2.setLC(ui->loadCapacity->value());
    record2.setPrice(ui->price->value());
    record2.setCount(ui->count->value());
    record2.setDelivery(ui->delivery->date());

}

void MainWindow::showWarehouse1(){
    if (isRecord1){
        Warehouse& dem = firstWarehouse;
        ui->name->setText(dem.getName());
        ui->tGroup->button(dem.getType())->setChecked(true);
        if (dem.getType() != 3){
            ui->engineCapacity->setValue(dem.getEC());
            ui->maxSpeed->setValue(dem.getMS());
            ui->capacity->setValue(dem.getCapacity());
            ui->accelerationTo100->setValue(dem.getAcceleration());
            ui->climateControl->setChecked(dem.getClimContr());
        }

        ui->loadCapacity->setValue(dem.getLC());
        ui->price->setValue(dem.getPrice());
        ui->count->setValue(dem.getCount());
        ui->delivery->setDate(dem.getDelivery());
    }
}

void MainWindow::showWarehouse2(){
    if (isRecord2){
        Warehouse& dem = secondWarehouse;
        ui->name->setText(dem.getName());
        ui->tGroup->button(dem.getType())->setChecked(true);
        if (dem.getType() != 3){
            ui->engineCapacity->setValue(dem.getEC());
            ui->maxSpeed->setValue(dem.getMS());
            ui->capacity->setValue(dem.getCapacity());
            ui->accelerationTo100->setValue(dem.getAcceleration());
            ui->climateControl->setChecked(dem.getClimContr());
        }
        ui->loadCapacity->setValue(dem.getLC());
        ui->price->setValue(dem.getPrice());
        ui->count->setValue(dem.getCount());
        ui->delivery->setDate(dem.getDelivery());
    }
}
