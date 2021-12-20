#include "qwe.h"
using namespace std;
int main()
{
    class1 p("postgres","localhost","postgres","ahbrfltkmrf228");
    p.Connect();
    QFile input_file("/home/misha/untitled1/file2.csv");
    if (!input_file.open(QIODevice::ReadOnly))
    {
        qDebug()<<"file not found";
        exit(0);

    }
    while (!input_file.atEnd())
    {
        QString line;

        line = input_file.readLine();
        QStringList a;
        a= line.split(",");
        p.Insert(a[0],a[1],a[2]);
    }
    QFile output_file1("/home/misha/untitled1/123.csv");
    QString b;
    if (!output_file1.open(QIODevice::WriteOnly))
    {
        qDebug()<<"file not found";
        exit(0);
    }
    else
    {
        QTextStream a2(&output_file1);
        b=p.Select();
        a2<<b;
    }
}






