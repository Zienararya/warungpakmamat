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
    QHBoxLayout *rawon;
    QLabel *namarawon;
    QLabel *jumlahrawon;
    QSpinBox *addrawon;
    QLineEdit *hargarawon;
    QHBoxLayout *nasijagung;
    QLabel *namamakanan;
    QLabel *jumlahnasijagung;
    QSpinBox *addjagung;
    QLineEdit *harganasijagung;
    QHBoxLayout *pecel;
    QLabel *namapecel;
    QLabel *jumlahpecel;
    QSpinBox *addpecel;
    QLineEdit *hargapecel;
    QHBoxLayout *nasiuduk;
    QLabel *namanasiuduk;
    QLabel *jumlahnasiuduk;
    QSpinBox *adduduk;
    QLineEdit *harganasiuduk;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *Minuman;
    QHBoxLayout *esteh;
    QLabel *namaesteh;
    QLabel *jumlahesteh;
    QSpinBox *addesteh;
    QLineEdit *hargaesteh;
    QHBoxLayout *kopi;
    QLabel *namakopi;
    QLabel *jumlahkopi;
    QSpinBox *addkopi;
    QLineEdit *hargakopi;
    QHBoxLayout *esjeruk;
    QLabel *namaesjeruk;
    QLabel *jumkahesjeruk;
    QSpinBox *addjeruk;
    QLineEdit *hargaesjeruk;
    QHBoxLayout *tehhangat;
    QLabel *namatehanget;
    QLabel *jumlahtehanget;
    QSpinBox *addtehanget;
    QLineEdit *hargatehanget;
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
        verticalLayoutWidget_2->setGeometry(QRect(0, 20, 471, 277));
        Makanan = new QVBoxLayout(verticalLayoutWidget_2);
        Makanan->setObjectName("Makanan");
        Makanan->setContentsMargins(20, 0, 0, 0);
        rawon = new QHBoxLayout();
        rawon->setObjectName("rawon");
        namarawon = new QLabel(verticalLayoutWidget_2);
        namarawon->setObjectName("namarawon");

        rawon->addWidget(namarawon);

        jumlahrawon = new QLabel(verticalLayoutWidget_2);
        jumlahrawon->setObjectName("jumlahrawon");

        rawon->addWidget(jumlahrawon);

        addrawon = new QSpinBox(verticalLayoutWidget_2);
        addrawon->setObjectName("addrawon");

        rawon->addWidget(addrawon);

        hargarawon = new QLineEdit(verticalLayoutWidget_2);
        hargarawon->setObjectName("hargarawon");

        rawon->addWidget(hargarawon);


        Makanan->addLayout(rawon);

        nasijagung = new QHBoxLayout();
        nasijagung->setObjectName("nasijagung");
        namamakanan = new QLabel(verticalLayoutWidget_2);
        namamakanan->setObjectName("namamakanan");

        nasijagung->addWidget(namamakanan);

        jumlahnasijagung = new QLabel(verticalLayoutWidget_2);
        jumlahnasijagung->setObjectName("jumlahnasijagung");

        nasijagung->addWidget(jumlahnasijagung);

        addjagung = new QSpinBox(verticalLayoutWidget_2);
        addjagung->setObjectName("addjagung");

        nasijagung->addWidget(addjagung);

        harganasijagung = new QLineEdit(verticalLayoutWidget_2);
        harganasijagung->setObjectName("harganasijagung");

        nasijagung->addWidget(harganasijagung);


        Makanan->addLayout(nasijagung);

        pecel = new QHBoxLayout();
        pecel->setObjectName("pecel");
        namapecel = new QLabel(verticalLayoutWidget_2);
        namapecel->setObjectName("namapecel");

        pecel->addWidget(namapecel);

        jumlahpecel = new QLabel(verticalLayoutWidget_2);
        jumlahpecel->setObjectName("jumlahpecel");

        pecel->addWidget(jumlahpecel);

        addpecel = new QSpinBox(verticalLayoutWidget_2);
        addpecel->setObjectName("addpecel");

        pecel->addWidget(addpecel);

        hargapecel = new QLineEdit(verticalLayoutWidget_2);
        hargapecel->setObjectName("hargapecel");

        pecel->addWidget(hargapecel);


        Makanan->addLayout(pecel);

        nasiuduk = new QHBoxLayout();
        nasiuduk->setObjectName("nasiuduk");
        namanasiuduk = new QLabel(verticalLayoutWidget_2);
        namanasiuduk->setObjectName("namanasiuduk");

        nasiuduk->addWidget(namanasiuduk);

        jumlahnasiuduk = new QLabel(verticalLayoutWidget_2);
        jumlahnasiuduk->setObjectName("jumlahnasiuduk");

        nasiuduk->addWidget(jumlahnasiuduk);

        adduduk = new QSpinBox(verticalLayoutWidget_2);
        adduduk->setObjectName("adduduk");

        nasiuduk->addWidget(adduduk);

        harganasiuduk = new QLineEdit(verticalLayoutWidget_2);
        harganasiuduk->setObjectName("harganasiuduk");

        nasiuduk->addWidget(harganasiuduk);


        Makanan->addLayout(nasiuduk);

        verticalLayoutWidget_3 = new QWidget(Menu);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(470, 20, 471, 171));
        Minuman = new QVBoxLayout(verticalLayoutWidget_3);
        Minuman->setObjectName("Minuman");
        Minuman->setContentsMargins(20, 0, 0, 0);
        esteh = new QHBoxLayout();
        esteh->setObjectName("esteh");
        namaesteh = new QLabel(verticalLayoutWidget_3);
        namaesteh->setObjectName("namaesteh");

        esteh->addWidget(namaesteh);

        jumlahesteh = new QLabel(verticalLayoutWidget_3);
        jumlahesteh->setObjectName("jumlahesteh");

        esteh->addWidget(jumlahesteh);

        addesteh = new QSpinBox(verticalLayoutWidget_3);
        addesteh->setObjectName("addesteh");

        esteh->addWidget(addesteh);

        hargaesteh = new QLineEdit(verticalLayoutWidget_3);
        hargaesteh->setObjectName("hargaesteh");

        esteh->addWidget(hargaesteh);


        Minuman->addLayout(esteh);

        kopi = new QHBoxLayout();
        kopi->setObjectName("kopi");
        namakopi = new QLabel(verticalLayoutWidget_3);
        namakopi->setObjectName("namakopi");

        kopi->addWidget(namakopi);

        jumlahkopi = new QLabel(verticalLayoutWidget_3);
        jumlahkopi->setObjectName("jumlahkopi");

        kopi->addWidget(jumlahkopi);

        addkopi = new QSpinBox(verticalLayoutWidget_3);
        addkopi->setObjectName("addkopi");

        kopi->addWidget(addkopi);

        hargakopi = new QLineEdit(verticalLayoutWidget_3);
        hargakopi->setObjectName("hargakopi");

        kopi->addWidget(hargakopi);


        Minuman->addLayout(kopi);

        esjeruk = new QHBoxLayout();
        esjeruk->setObjectName("esjeruk");
        namaesjeruk = new QLabel(verticalLayoutWidget_3);
        namaesjeruk->setObjectName("namaesjeruk");

        esjeruk->addWidget(namaesjeruk);

        jumkahesjeruk = new QLabel(verticalLayoutWidget_3);
        jumkahesjeruk->setObjectName("jumkahesjeruk");

        esjeruk->addWidget(jumkahesjeruk);

        addjeruk = new QSpinBox(verticalLayoutWidget_3);
        addjeruk->setObjectName("addjeruk");

        esjeruk->addWidget(addjeruk);

        hargaesjeruk = new QLineEdit(verticalLayoutWidget_3);
        hargaesjeruk->setObjectName("hargaesjeruk");

        esjeruk->addWidget(hargaesjeruk);


        Minuman->addLayout(esjeruk);

        tehhangat = new QHBoxLayout();
        tehhangat->setObjectName("tehhangat");
        namatehanget = new QLabel(verticalLayoutWidget_3);
        namatehanget->setObjectName("namatehanget");

        tehhangat->addWidget(namatehanget);

        jumlahtehanget = new QLabel(verticalLayoutWidget_3);
        jumlahtehanget->setObjectName("jumlahtehanget");

        tehhangat->addWidget(jumlahtehanget);

        addtehanget = new QSpinBox(verticalLayoutWidget_3);
        addtehanget->setObjectName("addtehanget");

        tehhangat->addWidget(addtehanget);

        hargatehanget = new QLineEdit(verticalLayoutWidget_3);
        hargatehanget->setObjectName("hargatehanget");

        tehhangat->addWidget(hargatehanget);


        Minuman->addLayout(tehhangat);

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
        namarawon->setText(QCoreApplication::translate("MainWindow", "Rawon", nullptr));
        jumlahrawon->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        namamakanan->setText(QCoreApplication::translate("MainWindow", "Nasi Jagung ", nullptr));
        jumlahnasijagung->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        namapecel->setText(QCoreApplication::translate("MainWindow", "Pecel ", nullptr));
        jumlahpecel->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        namanasiuduk->setText(QCoreApplication::translate("MainWindow", "Nasi Uduk", nullptr));
        jumlahnasiuduk->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        namaesteh->setText(QCoreApplication::translate("MainWindow", "Es Teh", nullptr));
        jumlahesteh->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        namakopi->setText(QCoreApplication::translate("MainWindow", "Kopi", nullptr));
        jumlahkopi->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        namaesjeruk->setText(QCoreApplication::translate("MainWindow", "Es Jeruk", nullptr));
        jumkahesjeruk->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        namatehanget->setText(QCoreApplication::translate("MainWindow", "Teh hangat", nullptr));
        jumlahtehanget->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
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
