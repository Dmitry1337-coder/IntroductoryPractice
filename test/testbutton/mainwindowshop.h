#ifndef MAINWINDOWSHOP_H
#define MAINWINDOWSHOP_H

#include <QDialog>
#include "../MainClass/mainclass.h"


namespace Ui {
class MainWindowShop;
}

class MainWindowShop : public QDialog
{
    Q_OBJECT

public:
    explicit MainWindowShop(QWidget *parent = nullptr);
    ~MainWindowShop();


private slots:
    void on_pushButton_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::MainWindowShop *ui;
    MainClass obj;
};

#endif // MAINWINDOWSHOP_H
