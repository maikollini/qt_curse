#include "person.h"

person::person(QObject *parent, QString name)
    : QObject{parent}
{    
    this->name = name;
}

person::~person()
{
    //When destroyed
}

void person::greet()
{
    qInfo() << "Hello ";
}
