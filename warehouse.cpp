#include "warehouse.h"

Warehouse::Warehouse()
{

}

void Warehouse::setName(QString name){
    this->name = name;
}

QString Warehouse::getName(){
    return this->name;
}

void Warehouse::setEC(float engineCapacity){
    this->engineCapacity = engineCapacity;
}

float Warehouse::getEC(){
    return this->engineCapacity;
}

void Warehouse::setAcceleration(float acceleratyTo100){
    this->accelerationTo100 = acceleratyTo100;
}

float Warehouse::getAcceleration(){
    return this->accelerationTo100;
}

void Warehouse::setCapacity(int capacity){
    this->capacity = capacity;
}

int Warehouse::getCapacity(){
    return this->capacity;
}

void Warehouse::setLC(int loadCapacity){
    this->loadCapacity = loadCapacity;
}

int Warehouse::getLC(){
    return this->loadCapacity;
}

void Warehouse::setMS(int maxSpeed){
    this->maxSpeed = maxSpeed;
}
int Warehouse::getMS(){
    return this->maxSpeed;
}

void Warehouse::setCount(int count){
    this->count = count;
}

int Warehouse::getCount(){
    return this->count;
}

void Warehouse::setClimContr(bool climateControl){
    this->climateControl = climateControl;
}

bool Warehouse::getClimContr(){
    return this->climateControl;
}

void Warehouse::setPrice(int price){
    this->price = price;
}
int Warehouse::getPrice(){
    return this->price;
}

void Warehouse::setDelivery(QDate delivery){
    this->delivery = delivery;
}

QDate Warehouse::getDelivery(){
    return this->delivery;
}

void Warehouse::setType(int type){
    this->type = type;
}

int Warehouse::getType(){
    return this->type;
}




