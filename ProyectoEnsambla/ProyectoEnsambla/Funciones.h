#pragma once

#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <stack>
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace std;

ref class CFunciones
{
public:

	int prioridad(char oper);
	string convertir(string  hile);
	double evaluar(string p);

	//4 basicas
	double suma(double,double);
	int resta();
	int mult();
	int divi();

	//Extra

	double valorAbsoluto(double numero);
	double raizCuadrada(double numero);
	int factorial(int numero);
	double elevarNDecimales(double numero, double potencia);
	double elevarCuadrado(double numero);

	double n = 0;
};

