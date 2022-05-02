#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <string>
#include <QListWidgetItem>


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
    void on_tabWidget_tabCloseRequested(int index);
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();



    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_2_pressed();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
