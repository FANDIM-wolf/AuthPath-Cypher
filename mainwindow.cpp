#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "basic.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//cypher function

void MainWindow::on_pushButton_clicked()
{   //get data
    QString input = ui->textEdit->toPlainText();
    //process data
    cypher_text(input);
    //show result
    ui->textEdit_2->setText(cypher_text(input));

}

//uncypher function
void MainWindow::on_pushButton_2_clicked()
{
        //get data
        QString input = ui->textEdit->toPlainText();
        //process data
        uncypher_text(input);
        //show result
        ui->textEdit_2->setText(uncypher_text(input));

}

