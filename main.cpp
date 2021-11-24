#include <iostream>
#include <QSqlDatabase>
#include <QtSql>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
using namespace std;

int main()
{
    /*cout << "Hello World!" << endl;
    //return 0;*/

    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setDatabaseName("postgres");
    db.setHostName("localhost");
    db.setUserName("postgres");
    db.setPassword("ahbrfltkmrf228");
    if (!db.open()){
        qDebug()<< db.lastError().text();
}
    else {
        qDebug()<<"soedinilos";
    }
QSqlQuery qwery;
/*qwery.exec("create table rewq("
            "qaz int not null,"
           "wsx int not null)");
    qwery.exec("drop table rewq");*/
//qwery.exec("insert into dsfdfgdg (qwer,asdf,zxcv) value(1,2,3)");
//qwery.exec("select * from dsfdfgdg");
}
