#include "qwe.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <iostream>
#include <QSqlDatabase>



bool class1::Connect()
{
    if (!db.open())
    {
        qDebug()<< db.lastError().text();
    }
    else
    {
        qDebug()<<"soedinilos";
    }
}
 class1::class1(const QString  &bd, const QString &host,const QString &name,const QString &password)
{
   db = QSqlDatabase::addDatabase("QPSQL");
   db.setDatabaseName(bd);
   db.setHostName(host);
   db.setUserName(name);
   db.setPassword(password);

}
void class1::Insert(QString  zxc,QString vbn,QString mlp)
{
    QSqlQuery qwery;
         qwery.prepare("INSERT INTO tabla values ("+zxc+","+vbn+","+mlp+")");
         qwery.exec();
}
QString class1::Select()
{
    QSqlQuery qwery1 ;
QString a;




    qwery1.prepare("select  zxc,vbn,mlp from tabla");
    qwery1.exec();
    while(qwery1.next())
    {

   a=a+qwery1.value("zxc").toString()+";";
    a=a+qwery1.value("vbn").toString()+";";
    a=a+qwery1.value("mlp").toString()+";";
    a=a+"\n";
    }
};
