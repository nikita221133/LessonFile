#include "file.h"

File::File(const QString &filename)
{
    file.setFileName(filename);
}
File::~File()
{
    if (file.isOpen())
        file.close();
}

void File::fileRead()
{
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Cannot open file";
        return ;
    }

    QTextStream in(&file);

    while(!in.atEnd())
    {
        qDebug() << in.readLine();
    }
    file.close();
}

void File::fileWrite(const QString &text)
{
    if(!file.open(QIODevice::Append | QIODevice::Text))
    {
        qDebug() << "Cannot open file";
        return;
    }

    QTextStream out(&file);
    out << text;
    file.close();
}
