#include "class.hpp"
DatabaseWork::DatabaseWork(const QString  &bd, const QString &host,const QString &name,const QString &password)
{
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setDatabaseName(bd);
    db.setHostName(host);
    db.setUserName(name);
    db.setPassword(password);
}
bool DatabaseWork::Connect()
{
    if (!db.open())
    {
        qDebug()<<"db not open";
        return false;
    }
    else
    {
        qDebug()<<"connect";
        return true;
    }
}

bool DatabaseWork::Insert(QString  &zxc,QString &vbn,QString &mlp)
{
    QSqlQuery query;
    query.prepare("INSERT INTO tabla values ("+zxc+","+vbn+","+mlp+")");
   if(!query.exec())
   {
       qDebug()<<"failed";
       return false;
   }
   else
   {
       return true;
   }
}
QString DatabaseWork::Select()
{
    QString line;
    QSqlQuery qwery ;
    qwery.prepare("select  zxc,vbn,mlp from tabla");
    qwery.exec();
    while(qwery.next())
    {
        line = line + qwery.value( "zxc" ).toString() + ";";
        line = line + qwery.value( "vbn" ).toString() +" ;";
        line = line + qwery.value( "mlp" ).toString() + ";";
        line = line + "\n";
    }
    return line;
};
