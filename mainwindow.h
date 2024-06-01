#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCheckBox>
#include <QLineEdit>
#include <QSpinBox>

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
    void on_btnJalankan_clicked();
    void on_btnHapus_clicked();

private:
    Ui::MainWindow *ui;
    void setHargaMakanan();
    void setHargaMinuman();
    void updateHarga(QCheckBox *checkbox, QLineEdit *lineEdit, int harga);
    int getTotalMakanan();
    int getTotalMinuman();
};

#endif // MAINWINDOW_H
