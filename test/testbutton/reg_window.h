#ifndef REG_WINDOW_H
#define REG_WINDOW_H

#include <QDialog>
#include "../MainClass/authorization.h"

namespace Ui {
class reg_window;
}

class reg_window : public QDialog
{
    Q_OBJECT

public:
    explicit reg_window(QWidget *parent = nullptr);
    ~reg_window();

private slots:
    void on_lineEditname_textEdited(const QString &arg1);

    void on_lineEditpass_textEdited(const QString &arg1);

    void on_pushButtonreg_clicked();

private:
    Ui::reg_window *ui;
    Authorization addUser;
};

#endif // REG_WINDOW_H
