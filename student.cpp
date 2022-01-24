#include "student.h"

student::student(QObject *parent, QString name)
    : person{parent}
{
    person::name = name;
}

void student::buybooks()
{
    qInfo() << "buying books ";
}

void student::greet()
{
    person::greet();
}
