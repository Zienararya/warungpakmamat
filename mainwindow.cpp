#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set initial prices to 0
    ui->lineEditHarga1->setText(QString::number(0));
    ui->lineEditHarga1_2->setText(QString::number(0));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateHarga(QCheckBox *checkbox, QLineEdit *lineEdit, int harga)
{
    if (checkbox->isChecked()) {
        lineEdit->setText(QString::number(harga));
    } else {
        lineEdit->setText(QString::number(0));
    }
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
    QList<QCheckBox *> allCheckBoxes = this->findChildren<QCheckBox *>();
    foreach (QCheckBox *checkBox, allCheckBoxes) {
        checkBox->setChecked(false);
    }

    ui->spinBoxJumlah1->setValue(0);
    ui->spinBoxJumlah1_2->setValue(0);

    ui->lineEditTotal->clear();
    ui->lineEditHarga1->setText(QString::number(0));
    ui->lineEditHarga1_2->setText(QString::number(0));
}

int MainWindow::getTotalMakanan()
{
    int total = 0;

    if (ui->Pecel->isChecked()) {
        int harga = 7000;  // Harga Pecel
        updateHarga(ui->Pecel, ui->lineEditHarga1, harga);
        int jumlah = ui->spinBoxJumlah1->value();
        total += harga * jumlah;
    }

    if (ui->NasiJagung->isChecked()) {
        int harga = 7000;  // Harga Nasi Jagung
        updateHarga(ui->NasiJagung, ui->lineEditHarga1, harga);
        int jumlah = ui->spinBoxJumlah1->value();
        total += harga * jumlah;
    }

    if (ui->Rawon->isChecked()) {
        int harga = 12000;  // Harga Rawon
        updateHarga(ui->Rawon, ui->lineEditHarga1, harga);
        int jumlah = ui->spinBoxJumlah1->value();
        total += harga * jumlah;
    }

    if (ui->NasiUduk->isChecked()) {
        int harga = 10000;  // Harga Nasi Uduk
        updateHarga(ui->NasiUduk, ui->lineEditHarga1, harga);
        int jumlah = ui->spinBoxJumlah1->value();
        total += harga * jumlah;
    }

    return total;
}

int MainWindow::getTotalMinuman()
{
    int total = 0;

    if (ui->EsTeh->isChecked()) {
        int harga = 2000;  // Harga Es Teh
        updateHarga(ui->EsTeh, ui->lineEditHarga1_2, harga);
        int jumlah = ui->spinBoxJumlah1_2->value();
        total += harga * jumlah;
    }

    if (ui->EsJeruk->isChecked()) {
        int harga = 3000;  // Harga Es Jeruk
        updateHarga(ui->EsJeruk, ui->lineEditHarga1_2, harga);
        int jumlah = ui->spinBoxJumlah1_2->value();
        total += harga * jumlah;
    }

    if (ui->TehHangat->isChecked()) {
        int harga = 2000;  // Harga Teh Hangat
        updateHarga(ui->TehHangat, ui->lineEditHarga1_2, harga);
        int jumlah = ui->spinBoxJumlah1_2->value();
        total += harga * jumlah;
    }

    if (ui->Kopi->isChecked()) {
        int harga = 4000;  // Harga Kopi Hitam
        updateHarga(ui->Kopi, ui->lineEditHarga1_2, harga);
        int jumlah = ui->spinBoxJumlah1_2->value();
        total += harga * jumlah;
    }

    return total;
}
