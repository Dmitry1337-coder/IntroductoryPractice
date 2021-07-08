#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../MainClass/authorization.h"




QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:


    void on_lineEditname_textEdited(const QString &arg1);
    void on_lineEditpass_textEdited(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButtonlog_clicked();



private:
    QVector <Authorization*> user1;
    Authorization user2;
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
