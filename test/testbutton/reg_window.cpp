#include "reg_window.h"
#include "ui_reg_window.h"
#include "mainwindowshop.h"





reg_window::reg_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reg_window)
{
    ui->setupUi(this);
}

reg_window::~reg_window()
{
    delete ui;
}



void reg_window::on_lineEditname_textEdited(const QString &arg1)
{
    addUser.SetName(arg1);
}


void reg_window::on_lineEditpass_textEdited(const QString &arg1)
{
    addUser.SetPassword(arg1);
}


void reg_window::on_pushButtonreg_clicked()
{
    if ((addUser.GetName().length()!=0)&&(addUser.GetPassword().length()!=0))
         {
           addUser.WriteData();
           MainWindowShop window;
           window.setModal(true);
           window.exec();
         }
}

