#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void Digit_Pressed();
    void on_pushButton_punto_released();
    void on_pushButton_unified_released();
    void on_pushButton_sum_released();
    void on_pushButton_clear_released();
    void on_pushButton_uno_released();
    void on_pushButton_dos_released();
    void on_pushButton_tres_released();
    void on_pushButton_cuatro_released();
    void on_pushButton_cinco_released();
    void on_pushButton_seis_released();
    void on_pushButton_siete_released();
    void on_pushButton_ocho_released();
    void on_pushButton_nueve_released();
    void on_pushButton_cero_released();
    void on_pushButton_igua_released();
    void on_pushButton_elevar_released();
    void on_pushButton_mult_released();
    void on_pushButton_div_released();
    void on_pushButton_resta_released();
    void on_pushButton_mult_2_released();
    void on_pushButton_mult_3_released();
    void on_pushButton_fact_released();
    void on_pushButton_sqrt_2_released();
    void on_pushButton_cos_released();
    void on_pushButton_sin_released();
    void on_pushButton_abs_released();
    void on_pushButton_log_released();
    void on_pushButton_log_2_released();
    void on_pushButton_pow_2_released();
    void on_pushButton_Mod_released();
    void on_pushButton_par1_released();
    void on_pushButton_par2_released();
    void on_pushButton_pi_released();
};

#endif // MAINWINDOW_H
