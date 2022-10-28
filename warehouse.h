#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include "qdatetime.h"
#include <QString>

class Warehouse
{
public:
    Warehouse();

    void setName(QString name);
    QString getName();

    void setEC(float engineCapacity);
    float getEC();

    void setCapacity(int capacity);
    int getCapacity();

    void setLC(int loadCapacity);
    int getLC();

    void setMS(int maxSpeed);
    int getMS();

    void setAcceleration(float accelerationTo100);
    float getAcceleration();

    void setCount(int count);
    int getCount();

    void setPrice(int price);
    int getPrice();

    void setDelivery(QDate delivery);
    QDate getDelivery();

    void setClimContr(bool climateControl);
    bool getClimContr();

    void setType(int type);
    int getType();


private:
    QString name;
    float engineCapacity;
    int capacity;
    int loadCapacity;
    int maxSpeed;
    float accelerationTo100;
    int count;
    int price;
    QDate delivery;
    bool climateControl;
    int type;


};

#endif // WAREHOUSE_H
