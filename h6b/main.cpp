#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass eLuokka;
    eLuokka.startToWait();

    return a.exec();
}
