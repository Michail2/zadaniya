#include <iostream>
#include <QSqlDatabase>
#include <QtSql>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QFile>
#include <QTextStream>
#include <QString>
#include "qwe.h"



using namespace std;

int main()
{
class1 p("postgres","localhost","postgres","ahbrfltkmrf228");
  p.Connect();
   QFile file("/home/misha/untitled1/file2.csv");
            if (!file.open(QIODevice::ReadOnly))
            {
                qDebug()<<"not";
            }
        while (!file.atEnd())
            { QString line;

                 line = file.readLine();
           QStringList a;
           a= line.split(",");
           p.Insert(a[0],a[1],a[2]);
            }
       QFile file1("/home/misha/untitled1/123.csv");
        if (file1.open(QIODevice::WriteOnly))
        p.Select();

}






