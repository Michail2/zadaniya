#ifndef QWE_HPP
#define QWE_HPP
#include <QStringList>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QFile>
#include <QTextStream>
#include <QString>

class DatabaseWork
{
public:
    DatabaseWork(const QString  &bd, const QString &host,const QString &name,const QString &password);
    bool Connect();
    bool Insert(QString  &zxc,QString &vbn,QString &mlp);
    QString Select();
private:
  QSqlDatabase db;
};
#endif // QWE_HPP
