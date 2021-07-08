#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include "MainClass_global.h"


class MAINCLASS_EXPORT Authorization
{
private:
    QString userName;
    QString userPassword;

public:
    QString& GetName();
    QString& GetPassword();
    void SetName(const QString &userName);
    void SetPassword(const QString &userPassword);
    void WriteData();

};

#endif // AUTHORIZATION_H
