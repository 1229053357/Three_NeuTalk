#ifndef REGISTER_H
#define REGISTER_H

#include <QMainWindow>
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Register; }
QT_END_NAMESPACE

class Register : public QDialog
{
    Q_OBJECT

public:
    Register(QWidget *parent = nullptr);
    ~Register();

private:
    Ui::Register *ui;
};
#endif // MAINWINDOW_H
