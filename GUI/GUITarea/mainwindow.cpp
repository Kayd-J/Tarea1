#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ejecutar_clicked()
{
    short inicio,final;
    inicio = ui->nodoInicio->text().toShort();
    final = ui->nodoFinal->text().toShort();

    ui->resultado->setText(QString::number(final+inicio));
}
