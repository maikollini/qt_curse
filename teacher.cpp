#include "teacher.h"

teacher::teacher(QObject *parent, QString name) : person{parent}
{
    person::name = name;
}

void teacher::teach()
{
    qInfo() << "Teaching ";
}

void teacher::greet()
{
    qInfo() << "Hello my name is :" << this->name;
    person::greet();
}
