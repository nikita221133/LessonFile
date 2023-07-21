#ifndef FILE_H
#define FILE_H

#include<QFile>
#include<QString>
#include<QTextStream>
#include<QDebug>


class File : public QObject
{
    Q_OBJECT
private:
    QFile file;
public:
    File(const QString &filename);
    File()=delete;
    virtual ~File();

    void fileRead();

    void fileWrite(const QString &text);

signals:
};

#endif // FILE_H
