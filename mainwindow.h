#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <warehouse.h>>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Warehouse firstWarehouse;
    Warehouse secondWarehouse;
    bool isRecord1 = false;
    bool isRecord2 = false;



private slots:
    void showWarehouse1();
    void showWarehouse2();
    void saveWarehouse1();
    void saveWarehouse2();
    void showBasicAttributes();
};
#endif // MAINWINDOW_H
