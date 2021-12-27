#include "class.hpp"
using namespace std;
int main()
{
    DatabaseWork dbWork("postgres","localhost","postgres","ahbrfltkmrf228");
    dbWork.Connect();
    QFile input_file("/home/misha/untitled2/1/2/file2.csv");
    if (!input_file.open(QIODevice::ReadOnly))
    {
        qDebug()<<"file not found";
        return 0;
    }
    else
    {
    while (!input_file.atEnd())
    {
        QString line = input_file.readLine();
        QStringList list = line.split(",");
        dbWork.Insert(list[0],list[1],list[2]);
    }
    }
    input_file.close();
    QFile output_file("/home/misha/untitled2/1/2/123.csv");
    if (!output_file.open(QIODevice::WriteOnly))
    {
        qDebug()<<"file not found";
        return 0;
    }
        QTextStream stream(&output_file);
        QString lines = dbWork.Select();
        stream<<lines;
        output_file.close();
}
