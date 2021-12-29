#include "form.hpp"
#include "ui_form.h"
#include "form.hpp"
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}
DatabaseWork dbWork("postgres","localhost","postgres","ahbrfltkmrf228");
void Form::on_pushButton_clicked()
{
    dbWork.Connect();
    QFile input_file(ui->lineEdit->text());/*"/home/misha/untitled2/1/2/file2.csv"*/
    if (!input_file.open(QIODevice::ReadOnly))
    {
        qDebug()<<"file not found";

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
}



void Form::on_pushButton_2_clicked()
{
    dbWork.Connect();
    QFile output_file(ui->lineEdit_2->text());/*"/home/misha/untitled2/1/2/123.csv"*/
    if (!output_file.open(QIODevice::WriteOnly))
    {
        qDebug()<<"file not found";
    }
        QTextStream stream(&output_file);
        QString lines = dbWork.Select();
        stream<<lines;
        output_file.close();
}
