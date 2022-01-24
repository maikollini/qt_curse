#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QDebug>

using namespace std;

class person : public QObject
{
    Q_OBJECT
public:
    //constructor
    explicit person(QObject *parent = nullptr, QString name = "");

    //destructor
    ~person();

    QString name;
    void greet();

signals:

};

#endif // PERSON_H
