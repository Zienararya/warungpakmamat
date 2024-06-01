/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Navbar;
    QLabel *Title;
    QGroupBox *Menu;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *Makanan;
    QCheckBox *Pecel;
    QCheckBox *NasiJagung;
    QCheckBox *Rawon;
    QCheckBox *NasiUduk;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *Minuman;
    QCheckBox *EsTeh;
    QCheckBox *EsJeruk;
    QCheckBox *TehHangat;
    QCheckBox *Kopi;
    QWidget *layoutWidget_3;
    QHBoxLayout *Total_makanan;
    QLabel *labelHarga;
    QLineEdit *lineEditHarga1;
    QLabel *labelJumlah;
    QSpinBox *spinBoxJumlah1;
    QLabel *labelBungkus;
    QWidget *layoutWidget_4;
    QHBoxLayout *Total_Minuman;
    QLabel *labelHarga_2;
    QLineEdit *lineEditHarga1_2;
    QLabel *labelJumlah_2;
    QSpinBox *spinBoxJumlah1_2;
    QLabel *labelBungkus_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *Option;
    QPushButton *btnHapus;
    QPushButton *btnJalankan;
    QWidget *layoutWidget;
    QHBoxLayout *Total_all;
    QLabel *labelTotal;
    QLineEdit *lineEditTotal;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(992, 559);
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Sans")});
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 991, 71));
        Navbar = new QVBoxLayout(verticalLayoutWidget);
        Navbar->setSpacing(6);
        Navbar->setObjectName("Navbar");
        Navbar->setContentsMargins(0, 0, 0, 0);
        Title = new QLabel(verticalLayoutWidget);
        Title->setObjectName("Title");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibri")});
        font1.setPointSize(12);
        font1.setBold(true);
        Title->setFont(font1);
        Title->setFrameShape(QFrame::Box);
        Title->setLineWidth(1);
        Title->setMidLineWidth(0);
        Title->setAlignment(Qt::AlignCenter);
        Title->setMargin(0);

        Navbar->addWidget(Title);

        Menu = new QGroupBox(centralwidget);
        Menu->setObjectName("Menu");
        Menu->setGeometry(QRect(25, 100, 945, 414));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri")});
        font2.setBold(false);
        Menu->setFont(font2);
        verticalLayoutWidget_2 = new QWidget(Menu);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 20, 471, 171));
        Makanan = new QVBoxLayout(verticalLayoutWidget_2);
        Makanan->setObjectName("Makanan");
        Makanan->setContentsMargins(20, 0, 0, 0);
        Pecel = new QCheckBox(verticalLayoutWidget_2);
        Pecel->setObjectName("Pecel");

        Makanan->addWidget(Pecel);

        NasiJagung = new QCheckBox(verticalLayoutWidget_2);
        NasiJagung->setObjectName("NasiJagung");
        NasiJagung->setChecked(false);

        Makanan->addWidget(NasiJagung);

        Rawon = new QCheckBox(verticalLayoutWidget_2);
        Rawon->setObjectName("Rawon");

        Makanan->addWidget(Rawon);

        NasiUduk = new QCheckBox(verticalLayoutWidget_2);
        NasiUduk->setObjectName("NasiUduk");

        Makanan->addWidget(NasiUduk);

        verticalLayoutWidget_3 = new QWidget(Menu);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(470, 20, 471, 171));
        Minuman = new QVBoxLayout(verticalLayoutWidget_3);
        Minuman->setObjectName("Minuman");
        Minuman->setContentsMargins(20, 0, 0, 0);
        EsTeh = new QCheckBox(verticalLayoutWidget_3);
        EsTeh->setObjectName("EsTeh");

        Minuman->addWidget(EsTeh);

        EsJeruk = new QCheckBox(verticalLayoutWidget_3);
        EsJeruk->setObjectName("EsJeruk");

        Minuman->addWidget(EsJeruk);

        TehHangat = new QCheckBox(verticalLayoutWidget_3);
        TehHangat->setObjectName("TehHangat");

        Minuman->addWidget(TehHangat);

        Kopi = new QCheckBox(verticalLayoutWidget_3);
        Kopi->setObjectName("Kopi");

        Minuman->addWidget(Kopi);

        layoutWidget_3 = new QWidget(Menu);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 200, 431, 26));
        Total_makanan = new QHBoxLayout(layoutWidget_3);
        Total_makanan->setObjectName("Total_makanan");
        Total_makanan->setContentsMargins(0, 0, 0, 0);
        labelHarga = new QLabel(layoutWidget_3);
        labelHarga->setObjectName("labelHarga");

        Total_makanan->addWidget(labelHarga);

        lineEditHarga1 = new QLineEdit(layoutWidget_3);
        lineEditHarga1->setObjectName("lineEditHarga1");

        Total_makanan->addWidget(lineEditHarga1);

        labelJumlah = new QLabel(layoutWidget_3);
        labelJumlah->setObjectName("labelJumlah");

        Total_makanan->addWidget(labelJumlah);

        spinBoxJumlah1 = new QSpinBox(layoutWidget_3);
        spinBoxJumlah1->setObjectName("spinBoxJumlah1");

        Total_makanan->addWidget(spinBoxJumlah1);

        labelBungkus = new QLabel(layoutWidget_3);
        labelBungkus->setObjectName("labelBungkus");

        Total_makanan->addWidget(labelBungkus);

        layoutWidget_4 = new QWidget(Menu);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(10, 240, 431, 26));
        Total_Minuman = new QHBoxLayout(layoutWidget_4);
        Total_Minuman->setObjectName("Total_Minuman");
        Total_Minuman->setContentsMargins(0, 0, 0, 0);
        labelHarga_2 = new QLabel(layoutWidget_4);
        labelHarga_2->setObjectName("labelHarga_2");

        Total_Minuman->addWidget(labelHarga_2);

        lineEditHarga1_2 = new QLineEdit(layoutWidget_4);
        lineEditHarga1_2->setObjectName("lineEditHarga1_2");

        Total_Minuman->addWidget(lineEditHarga1_2);

        labelJumlah_2 = new QLabel(layoutWidget_4);
        labelJumlah_2->setObjectName("labelJumlah_2");

        Total_Minuman->addWidget(labelJumlah_2);

        spinBoxJumlah1_2 = new QSpinBox(layoutWidget_4);
        spinBoxJumlah1_2->setObjectName("spinBoxJumlah1_2");

        Total_Minuman->addWidget(spinBoxJumlah1_2);

        labelBungkus_2 = new QLabel(layoutWidget_4);
        labelBungkus_2->setObjectName("labelBungkus_2");

        Total_Minuman->addWidget(labelBungkus_2);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(800, 520, 168, 28));
        Option = new QHBoxLayout(layoutWidget_2);
        Option->setObjectName("Option");
        Option->setContentsMargins(0, 0, 0, 0);
        btnHapus = new QPushButton(layoutWidget_2);
        btnHapus->setObjectName("btnHapus");

        Option->addWidget(btnHapus);

        btnJalankan = new QPushButton(layoutWidget_2);
        btnJalankan->setObjectName("btnJalankan");

        Option->addWidget(btnJalankan);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 520, 281, 28));
        Total_all = new QHBoxLayout(layoutWidget);
        Total_all->setObjectName("Total_all");
        Total_all->setContentsMargins(0, 0, 0, 0);
        labelTotal = new QLabel(layoutWidget);
        labelTotal->setObjectName("labelTotal");

        Total_all->addWidget(labelTotal);

        lineEditTotal = new QLineEdit(layoutWidget);
        lineEditTotal->setObjectName("lineEditTotal");

        Total_all->addWidget(lineEditTotal);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Title->setText(QCoreApplication::translate("MainWindow", "Warung Pak Mamat", nullptr));
        Menu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        Pecel->setText(QCoreApplication::translate("MainWindow", "Pecel", nullptr));
        NasiJagung->setText(QCoreApplication::translate("MainWindow", "Nasi Jagung", nullptr));
        Rawon->setText(QCoreApplication::translate("MainWindow", "Rawon", nullptr));
        NasiUduk->setText(QCoreApplication::translate("MainWindow", "Nasi Uduk", nullptr));
        EsTeh->setText(QCoreApplication::translate("MainWindow", "Es Teh", nullptr));
        EsJeruk->setText(QCoreApplication::translate("MainWindow", "Es Jeruk", nullptr));
        TehHangat->setText(QCoreApplication::translate("MainWindow", "Teh Hangat", nullptr));
        Kopi->setText(QCoreApplication::translate("MainWindow", "Kopi Hitam", nullptr));
        labelHarga->setText(QCoreApplication::translate("MainWindow", "Harga Makanan:", nullptr));
        labelJumlah->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        labelBungkus->setText(QCoreApplication::translate("MainWindow", "Bungkus", nullptr));
        labelHarga_2->setText(QCoreApplication::translate("MainWindow", "Harga Minuman:", nullptr));
        labelJumlah_2->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        labelBungkus_2->setText(QCoreApplication::translate("MainWindow", "Bungkus", nullptr));
        btnHapus->setText(QCoreApplication::translate("MainWindow", "Hapus", nullptr));
        btnJalankan->setText(QCoreApplication::translate("MainWindow", "Jalankan", nullptr));
        labelTotal->setText(QCoreApplication::translate("MainWindow", "Total:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
