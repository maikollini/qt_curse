#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>
#include "person.h"

class teacher : public person
{
    Q_OBJECT
public:
    explicit teacher(QObject *parent = nullptr, QString name = "");

    void teach();
    void greet();

signals:

};

#endif // TEACHER_H
