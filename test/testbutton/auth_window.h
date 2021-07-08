#ifndef AUTH_WINDOW_H
#define AUTH_WINDOW_H

#include <QDialog>

namespace Ui {
class auth_window;
}

class auth_window : public QDialog
{
    Q_OBJECT

public:
    explicit auth_window(QWidget *parent = nullptr);
    ~auth_window();
    QString getLogin(); //
    QString getPass();//

signals:
    void login_button_clicked();//
    void register_button_clicked();//

private slots:
    void on_lineEditname_textEdited(const QString &arg1);

    void on_lineEditpass_textEdited(const QString &arg1);

    void on_pushButtonlog_clicked();

    void on_pushButton_clicked();

private:
    Ui::auth_window *ui;
    QString m_username;//
    QString m_userpass;//
};

#endif // AUTH_WINDOW_H
