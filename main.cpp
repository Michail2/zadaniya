#include <iostream>
#include <QSqlDatabase>
#include <QtSql>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    //return 0;
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

}
