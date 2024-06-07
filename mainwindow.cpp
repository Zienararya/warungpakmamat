#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set initial prices to 0
    ui->harganasijagung->setText(QString::number(7000));
    ui->hargapecel->setText(QString::number(7000));
    ui->hargarawon->setText(QString::number(12000));
    ui->harganasiuduk->setText(QString::number(10000));
    ui->hargaesteh->setText(QString::number(2000));
    ui->hargakopi->setText(QString::number(5000));
    ui->hargaesjeruk->setText(QString::number(3000));
    ui->hargatehanget->setText(QString::number(2000));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateHarga(QSpinBox *spinBox, QLineEdit *lineEdit, int harga)
{
    int jumlah = spinBox->value();
    lineEdit->setText(QString::number(harga * jumlah));
}

void MainWindow::on_btnJalankan_clicked()
{
    int totalMakanan = getTotalMakanan();
    int totalMinuman = getTotalMinuman();
    int total = totalMakanan + totalMinuman;

    ui->lineEditTotal->setText(QString::number(total));
}

void MainWindow::on_btnHapus_clicked()
{
    ui->addpecel->setValue(0);
    ui->addjagung->setValue(0);
    ui->adduduk->setValue(0);
    ui->addrawon->setValue(0);
    ui->addesteh->setValue(0);
    ui->addkopi->setValue(0);
    ui->addjeruk->setValue(0);
    ui->addtehanget->setValue(0);

    ui->lineEditTotal->clear();
}

int MainWindow::getTotalMakanan()
{
    int total = 0;

    int hargaPecel = 7000;
    updateHarga(ui->addpecel, ui->hargapecel, hargaPecel);
    total += hargaPecel * ui->addpecel->value();

    int hargaNasiJagung = 7000;
    updateHarga(ui->addjagung, ui->harganasijagung, hargaNasiJagung);
    total += hargaNasiJagung * ui->addjagung->value();

    int hargaRawon = 12000;
    updateHarga(ui->addrawon, ui->hargarawon, hargaRawon);
    total += hargaRawon * ui->addrawon->value();

    int hargaNasiUduk = 10000;
    updateHarga(ui->adduduk, ui->harganasiuduk, hargaNasiUduk);
    total += hargaNasiUduk * ui->adduduk->value();

    return total;
}

int MainWindow::getTotalMinuman()
{
    int total = 0;

    int hargaEsTeh = 2000;
    updateHarga(ui->addesteh, ui->hargaesteh, hargaEsTeh);
    total += hargaEsTeh * ui->addesteh->value();

    int hargaKopi = 5000;
    updateHarga(ui->addkopi, ui->hargakopi, hargaKopi);
    total += hargaKopi * ui->addkopi->value();

    int hargaEsJeruk = 3000;
    updateHarga(ui->addjeruk, ui->hargaesjeruk, hargaEsJeruk);
    total += hargaEsJeruk * ui->addjeruk->value();

    int hargaTehHangat = 2000;
    updateHarga(ui->addtehanget, ui->hargatehanget, hargaTehHangat);
    total += hargaTehHangat * ui->addtehanget->value();

    return total;
}
