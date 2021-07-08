#include "mainwindow.h"
#include "ui_mainwindow.h"



#include "mainwindowshop.h"


#include <QVector>

#include "reg_window.h"
#include <QDebug>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
        ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_lineEditname_textEdited(const QString &arg1)
{

   user2.SetName(arg1);

}

void MainWindow::on_lineEditpass_textEdited(const QString &arg1)
{
    user2.SetPassword(arg1);

}



void MainWindow::on_pushButton_clicked()
{
    reg_window window;
    window.setModal(true);
    window.exec();
}


void MainWindow::on_pushButtonlog_clicked()
{
     QFile file("Names.txt");
     QString username;
     QString userpass;
     QTextStream in(&file);


     // С помощью метода open() открываем файл в режиме чтения

     if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {

         for (int counter=0;!in.atEnd();counter++) {

             user1.push_back(new Authorization);
             username=in.readLine();
             userpass=in.readLine();
             user1[counter]->SetName(username);
             user1[counter]->SetPassword(userpass);

         }
     }
         file.close();


         for(int i=0;i<user1.size();i++)
         {


             if((user2.GetName()==user1[i]->GetName())&&(user2.GetPassword()==user1[i]->GetPassword())&&(user2.GetName().length()!=0)&&(user2.GetName().length()!=0))
                {MainWindowShop window1;
                window1.setModal(true);
                window1.exec();}
         }
}





