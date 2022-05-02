#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->setCornerWidget(ui->pushButton_3);
    ui->tabWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    if(index!=0)
    {
       ui->tabWidget->removeTab(index);
       return;
    }
       QMessageBox::information(this, "Warning", "Sorry you can't close first TAB");

}


void MainWindow::on_pushButton_3_clicked()
{
    ui->tabWidget->addTab(new QWidget(), QString("Tab %0").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
}


void MainWindow::on_pushButton_clicked()
{
   QString path = "/home/madhu/Desktop/QT/2may_02/states.txt";//QFileDialog::getOpenFileName();
   QFile states(path);
   QTextStream in(&states);
   states.open(QFile::ReadWrite);
   while(!in.atEnd())
   {
       ui->listWidget->addItem(in.readLine());
   }
   states.close();
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    ui->label_4->setText(item->text());
    ui->tabWidget->setCurrentIndex(1);
}





void MainWindow::on_pushButton_2_pressed()
{
    ui->listWidget->clear();
}

