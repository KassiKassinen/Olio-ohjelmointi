#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnCount, &QPushButton::clicked, this, &MainWindow::showText);
    connect(ui->btnCount, &QPushButton::clicked, this, &MainWindow::showLabel);
    connect(ui->btnReset, &QPushButton::clicked, this, &MainWindow::showText);
    connect(ui->btnReset, &QPushButton::clicked, this, &MainWindow::showLabel);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    counter++;

}

void MainWindow::showText()
{
    ui->txtResult->setText(QString::number(counter));
}

void MainWindow::showLabel()
{
    ui->labelInfo->setText(QString("Painiketta Count on painettu %1 kertaa").arg(counter));

}



void MainWindow::on_btnReset_clicked()
{
    counter = 0;
}

