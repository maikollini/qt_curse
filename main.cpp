#include <QCoreApplication>
#include "student.h"
#include "teacher.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    student maikoll(0, maikoll);
    teacher juan(0, juan);

    maikoll.buybooks();
    juan.teach();
    juan.greet();

    return a.exec();
}
