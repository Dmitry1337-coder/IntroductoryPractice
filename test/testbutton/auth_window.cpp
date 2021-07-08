#include "auth_window.h"
#include "ui_auth_window.h"

auth_window::auth_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::auth_window)
{
    ui->setupUi(this);
}

auth_window::~auth_window()
{
    delete ui;
}

void auth_window::on_pushButtonlog_clicked()
{
    emit login_button_clicked();//
}


void auth_window::on_pushButton_clicked()
{
    emit register_button_clicked();//
}


void auth_window::on_lineEditname_textEdited(const QString &arg1)
{
    auth_window::m_username = arg1;//
}


void auth_window::on_lineEditpass_textEdited(const QString &arg1)
{
    auth_window::m_userpass = arg1;//
}

QString auth_window::getLogin()//
{
    return auth_window::m_username;//
}

QString auth_window::getPass()//
{
    return auth_window::m_userpass;//
}
