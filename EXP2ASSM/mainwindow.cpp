#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include<iostream>
#include<evaluador.h>
#include<stack>
#include <math.h>
using namespace std;

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

void MainWindow::Digit_Pressed(){
    QPushButton * button=(QPushButton*)sender();
    double Labelnumber;
    QString newLabel;

    Labelnumber=(ui->label->text()+button->text()).toDouble();
    newLabel=QString::number(Labelnumber,'g',15);
    ui->label->setText(newLabel);

}

void MainWindow::on_pushButton_punto_released()
{
    ui->label->setText(ui->label->text()+".");
}
void MainWindow::on_pushButton_unified_released(){
}
void MainWindow::on_pushButton_sum_released()
{
    ui->label->setText(ui->label->text()+"+");

}

void MainWindow::on_pushButton_clear_released()
{
    ui->label->setText("");
}

void MainWindow::on_pushButton_uno_released()
{
     ui->label->setText(ui->label->text()+"1");

}

void MainWindow::on_pushButton_dos_released()
{
     ui->label->setText(ui->label->text()+"2");

}

void MainWindow::on_pushButton_tres_released()
{
     ui->label->setText(ui->label->text()+"3");
}

void MainWindow::on_pushButton_cuatro_released()
{
     ui->label->setText(ui->label->text()+"4");

}

void MainWindow::on_pushButton_cinco_released()
{
     ui->label->setText(ui->label->text()+"5");
}

void MainWindow::on_pushButton_seis_released()
{
     ui->label->setText(ui->label->text()+"6");
}

void MainWindow::on_pushButton_siete_released()
{
     ui->label->setText(ui->label->text()+"7");
}

void MainWindow::on_pushButton_ocho_released()
{
     ui->label->setText(ui->label->text()+"8");
}

void MainWindow::on_pushButton_nueve_released()
{
     ui->label->setText(ui->label->text()+"9");
}

void MainWindow::on_pushButton_cero_released()
{
     ui->label->setText(ui->label->text()+"0");
}

void MainWindow::on_pushButton_igua_released()
{
   string cadena;
   string posfija;
   evaluador eva;
   QString qs=ui->label->text();
   QString resutado;

   cadena=qs.toStdString();
   posfija=eva.infixToPostfix(cadena);
   float valor=0;
   valor=eva.posfixToRes(posfija);
   cout<<valor<<endl;
   resutado=QString::number(valor,'g',15);

   ui->label->setText(resutado);



}

void MainWindow::on_pushButton_elevar_released()
{
      ui->label->setText(ui->label->text()+"^");

}

void MainWindow::on_pushButton_mult_released()
{
      ui->label->setText(ui->label->text()+"*");
}

void MainWindow::on_pushButton_div_released()
{
      ui->label->setText(ui->label->text()+"/");

}

void MainWindow::on_pushButton_resta_released()
{
      ui->label->setText(ui->label->text()+"-");

}



void MainWindow::on_pushButton_fact_released()
{
    string cadena;

    evaluador eva;
    QString qs=ui->label->text();
    QString resutado;

    cadena=qs.toStdString();

    float valor=stof(cadena);
    float res=1;
    for(int i=1;i<=valor;i++){
        res=res*i;
    }

    resutado=QString::number(res,'g',15);

    ui->label->setText(resutado);

}

void MainWindow::on_pushButton_sqrt_2_released()
{
    string cadena;
    QString qs=ui->label->text();
    QString resultado;
    cadena=qs.toStdString();
    float valor=stof(cadena);
    float res=sqrt(valor);
    resultado=QString::number(res,'g',15);

    ui->label->setText(resultado);

}

void MainWindow::on_pushButton_cos_released()
{
    string cadena;
    QString qs=ui->label->text();
    QString resultado;
    cadena=qs.toStdString();
    float valor=stof(cadena);
     valor = valor * (3.14/180);
    float res;
    __asm__ __volatile__ ( "fld %1;"
                            "fcos;"
                            "fstp %0;" : "=m" (res) : "m" (valor)
    ) ;
    resultado=QString::number(res,'g',15);

    ui->label->setText(resultado);

}



void MainWindow::on_pushButton_abs_released()
{
    string cadena;
    QString qs=ui->label->text();
    QString resultado;
    cadena=qs.toStdString();
    cout<<cadena;
    float valor=stof(cadena);
    if(valor<0){
        valor*=-1;
    }
    resultado=QString::number(valor,'g',15);

    ui->label->setText(resultado);


}



void MainWindow::on_pushButton_log_released()
{
    string cadena;
    QString qs=ui->label->text();
    QString resultado;
    cadena=qs.toStdString();

    float valor = stof(cadena);
    float res = log(valor);

    resultado=QString::number(res,'g',15);

    ui->label->setText(resultado);

}

void MainWindow::on_pushButton_log_2_released()
{
    string cadena;
    QString qs=ui->label->text();
    QString resultado;
    cadena=qs.toStdString();

    float valor = stof(cadena);
    float res = log(valor);

    resultado=QString::number(res,'g',15);

    ui->label->setText(resultado);
}

void MainWindow::on_pushButton_sin_released()
{
    string cadena;
    QString qs=ui->label->text();
    QString resultado;
    cadena=qs.toStdString();
    float valor=stof(cadena);
    valor = valor * (3.14/180);
    float res;
    __asm__ __volatile__ ( "fld %1;"
                            "fsin;"
                            "fstp %0;" : "=m" (res) : "m" (valor)
    ) ;
    resultado=QString::number(res,'g',15);

    ui->label->setText(resultado);
}

void MainWindow::on_pushButton_pow_2_released()
{
    string cadena;
    QString qs=ui->label->text();
    QString resultado;
    cadena=qs.toStdString();
    float valor=stof(cadena);
    float res;
    __asm__ ( "fld %1;"
              "fld %2;"
              "fmul;"
              "fstp %0;" : "=m" (res) : "m" (valor), "m" (valor) ) ;
    resultado=QString::number(res,'g',15);

    ui->label->setText(resultado);
}

void MainWindow::on_pushButton_Mod_released()
{
    string cadena;

    evaluador eva;
    QString qs=ui->label->text();
    QString resutado;

    cadena=qs.toStdString();

    float valor=stof(cadena);
    float res=0;
    for(int i=1;i<=valor;i++){
        res=res+i;
    }

    resutado=QString::number(res,'g',15);

    ui->label->setText(resutado);
}

void MainWindow::on_pushButton_par1_released()
{
     ui->label->setText(ui->label->text()+"(");

}

void MainWindow::on_pushButton_par2_released()
{
     ui->label->setText(ui->label->text()+")");
}

void MainWindow::on_pushButton_pi_released()
{
     ui->label->setText(ui->label->text()+"3.14159");

}
