#include "authorization.h"

QString& Authorization::GetName()
{
    return userName;
}


QString& Authorization::GetPassword()
{
    return userPassword;
}

void Authorization::SetPassword(const QString &userPassword)
{
    this->userPassword=userPassword;
}

void Authorization:: SetName(const QString &userName)
{
    this->userName=userName;
}

void Authorization:: WriteData()
{

    QFile WriteText ("Names.txt");
    if(WriteText.open(QIODevice::Text | QIODevice::Append)) {
           QTextStream write(&WriteText);
           if ((this->userName.length()!=0)&&(this->userPassword.length()!=0))
           write<<this->userName<<"\n"<<this->userPassword<<"\n";
       }
    WriteText.close();
}

/*bool Authorization::CheckName()
{

    QVector <QString> checkname;
    QFile check("Names.txt");
    QTextStream in(&check);
    QString name;

    if (check.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&check);
             for (int counter=0;!in.atEnd();counter++) {

                name=in.readLine();

                 if (counter%2==0)
                {

                    checkname[counter].push_back(name);
                }

        }
    }



    for (QString names: checkname)
    {
        if (this->userName==names)
            return 0;
    }
    return 1;
}

*/


