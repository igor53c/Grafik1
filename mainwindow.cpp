#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_btnBeenden_clicked()
{
    this->close();
}

void MainWindow::on_btnKopieren_clicked()
{
    QString s = ui->textEingabe->text();

    ui->textKopie->setText(s);

    ui->textEingabe->clear();

    ui->textEingabe->setFocus();
}

void MainWindow::on_btnLoeschen_clicked()
{
    ui->textEingabe->clear();

    ui->textKopie->clear();

    ui->textEingabe->setFocus();
}

