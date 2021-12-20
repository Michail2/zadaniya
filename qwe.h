#ifndef QWE_H
#define QWE_H
#include <QStringList>
#include <QObject>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QFile>
#include <QTextStream>
#include <QString>

class class1
{
public:
    QSqlDatabase db;
    class1(const QString  &bd, const QString &host,const QString &name,const QString &password);
    bool Connect();
    void Insert(QString  zxc,QString vbn,QString mlp);
    QString Select();
};
#endif // QWE_H
