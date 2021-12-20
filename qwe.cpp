#include "qwe.h"
#include <iostream>
bool class1::Connect()
{
    if (!db.open())
    {
        qDebug()<<"db not open";
        exit(0);
    }
    else
    {
        qDebug()<<"connect";
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
    QSqlQuery request;
    request.prepare("INSERT INTO tabla values ("+zxc+","+vbn+","+mlp+")");
    request.exec();
}
QString class1::Select()
{
    QString a;
    QSqlQuery request_1 ;
    request_1.prepare("select  zxc,vbn,mlp from tabla");
    request_1.exec();
    while(request_1.next())
    {
        a=a+request_1.value("zxc").toString()+";";
        a=a+request_1.value("vbn").toString()+";";
        a=a+request_1.value("mlp").toString()+";";
        a=a+"\n";
    }
    return a;
};
