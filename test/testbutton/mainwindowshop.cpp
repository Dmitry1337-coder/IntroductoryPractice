#include "mainwindowshop.h"
#include "ui_mainwindowshop.h"


#include <QMessageBox>
#include <QListWidget>

MainWindowShop::MainWindowShop(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainWindowShop)
{
    ui->setupUi(this);

    ui->listWidget->addItem("  Диван\t\t 25500");
    ui->listWidget->addItem("  Кровать\t\t 30000");
    ui->listWidget->addItem("  Стол\t\t 7500");
    ui->listWidget->addItem("  Стул\t\t 6000");
    ui->listWidget->addItem("  Кресло\t\t 15000");
    ui->listWidget->addItem("  Шкаф\t\t 18000");
    ui->listWidget->addItem("  Люстра\t\t 5000");
    ui->listWidget->addItem("  Светильник\t\t 3000");
}



MainWindowShop::~MainWindowShop()
{
    delete ui;
}


void MainWindowShop::on_pushButton_clicked()
{
   QString choice=ui->listWidget->currentItem()->text();

   ui->listWidget->currentItem()->setBackground(Qt::blue);
   ui->listWidget->currentItem()->setForeground(Qt::white);



  if (choice=="  Диван\t\t 25500")
  {
      choice="Диван 25500";
     QMessageBox::StandardButton verification= QMessageBox::question(this,"Подтверждение добавления в корзину",
     "Вы уверены, что хотите добавить в корзину "+choice,QMessageBox::Yes|QMessageBox::No);

     if (verification==QMessageBox::Yes)
      obj.EnlargeSofa();
  }

  if (choice=="  Кровать\t\t 30000")
  {
      choice="Кровать 30000";
      QMessageBox::StandardButton verification= QMessageBox::question(this,"Подтверждение добавления в корзину",
      "Вы уверены, что хотите добавить в корзину "+choice,QMessageBox::Yes|QMessageBox::No);

      if (verification==QMessageBox::Yes)
      obj.EnlargeBed();
  }

  if (choice=="  Стол\t\t 7500")
  {
      choice="Стол 7500";
      QMessageBox::StandardButton verification= QMessageBox::question(this,"Подтверждение добавления в корзину",
      "Вы уверены, что хотите добавить в корзину "+choice,QMessageBox::Yes|QMessageBox::No);

      if (verification==QMessageBox::Yes)
      obj.EnlargeTable();
  }

  if (choice=="  Стул\t\t 6000")
  {
      choice="Стул 6000";
      QMessageBox::StandardButton verification= QMessageBox::question(this,"Подтверждение добавления в корзину",
      "Вы уверены, что хотите добавить в корзину "+choice,QMessageBox::Yes|QMessageBox::No);

      if (verification==QMessageBox::Yes)
      obj.EnlargeChair();
  }

  if (choice=="  Кресло\t\t 15000")
  {
      choice="Кресло 15000";
      QMessageBox::StandardButton verification= QMessageBox::question(this,"Подтверждение добавления в корзину",
      "Вы уверены, что хотите добавить в корзину "+choice,QMessageBox::Yes|QMessageBox::No);

      if (verification==QMessageBox::Yes)
      obj.EnlargeArmchair();
  }

  if (choice=="  Шкаф\t\t 18000")
  {
      choice="Шкаф 18000";
      QMessageBox::StandardButton verification= QMessageBox::question(this,"Подтверждение добавления в корзину",
      "Вы уверены, что хотите добавить в корзину "+choice,QMessageBox::Yes|QMessageBox::No);

      if (verification==QMessageBox::Yes)
      obj.EnlargeCupboard();
  }

  if (choice=="  Люстра\t\t 5000")
  {
      choice="Люстра 5000";
      QMessageBox::StandardButton verification= QMessageBox::question(this,"Подтверждение добавления в корзину",
      "Вы уверены, что хотите добавить в корзину "+choice,QMessageBox::Yes|QMessageBox::No);

      if (verification==QMessageBox::Yes)
      obj.EnlargeChandelier();
  }

  if (choice=="  Светильник\t\t 3000")
  {
      choice="Светильник 3000";
      QMessageBox::StandardButton verification= QMessageBox::question(this,"Подтверждение добавления в корзину",
      "Вы уверены, что хотите добавить в корзину "+choice,QMessageBox::Yes|QMessageBox::No);

      if (verification==QMessageBox::Yes)
      obj.EnlargeLamp();
  }

}


void MainWindowShop::on_pushButton_1_clicked()
{
    QString stringSofa=QString::number(obj.GetSofa());
    QString stringBed=QString::number(obj.GetBed());
    QString stringTable=QString::number(obj.GetTable());
    QString stringChair=QString::number(obj.GetChair());
    QString stringArmchair=QString::number(obj.GetArmchair());
    QString stringCupboard=QString::number(obj.GetCupboard());
    QString stringChandelier=QString::number(obj.GetChandelier());
    QString stringLamp=QString::number(obj.GetLamp());

    QMessageBox::information(0, "Information", " Вы купили : \n Количество диванов "+stringSofa+"\n Количество кроватей "+stringBed+
    "\n Количество столов "+stringTable+"\n Количество стульев "+ stringChair+ "\n Количесвтво кресел "+stringArmchair+"\n ""Количество шкафов "
    +stringCupboard+"\n "+"Количество люстр "+stringChandelier+"\n Количество светильников "+stringLamp);

}
void MainWindowShop::on_pushButton_2_clicked()
{
    unsigned int cost=obj.GetSofa()*25500+obj.GetBed()*30000+obj.GetTable()
    *7500+obj.GetChair()*6000+obj.GetArmchair()*15000+obj.GetCupboard()*18000+obj.GetChandelier()*5000+obj.GetLamp()*3000;
    QString stringCost=QString::number(cost);
    QMessageBox::information(0, "Information", "Стоимость товара : "+stringCost);

}


