#include <QCoreApplication>
#include "file.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString str;

    File file("1.txt");

    str = "Something wrong\n";

    file.fileWrite(str);
    file.fileWrite(str);

    file.fileRead();

    return a.exec();
}
