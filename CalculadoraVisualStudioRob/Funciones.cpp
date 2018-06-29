#include "Funciones.h"

using namespace std;

extern "C" void hello_from_asm();
extern "C" double _sumaE(double,double);
extern "C" int valorAbs(int);


int CFunciones::prioridad(char oper) {
	switch (oper) {
	case '^': return 3;
	case '*':
	case '/': return 2;
	case '+':
	case '-': return 1;
	case ')': return -1;
	default: return 0;
	}
}

string CFunciones::convertir(string hile) {
	stack<char> pila;
	string posf = "";
	for (int i = 0; i < hile.size(); i++) {
		switch (hile[i]) {
		case '(':
			pila.push('(');
			break;
		case ')':
			while (!pila.empty() && pila.top() != '(') {
				posf += string(1, pila.top()) + " ";
				pila.pop();
			}
			pila.pop();
			break;
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
			while (!pila.empty() && prioridad(hile[i]) <= prioridad(pila.top())) {
				posf += string(1, pila.top()) + " ";
				pila.pop();
			}
			pila.push(hile[i]);
			break;
		default:
			while (isdigit(hile[i]) || hile[i] == '.')
				posf += string(1, hile[i++]);
			posf += " ";
			i--;
		}
	}
	while (!pila.empty()) {
		posf += string(1, pila.top()) + " ";
		pila.pop();
	}
	return posf;
}

double CFunciones::evaluar(string p) {
	stack<double> pila;
	double op1, op2;
	for (int i = 0; i < p.size(); i += 2) {
		switch (p[i]) {
		case '^':
			op2 = pila.top(); pila.pop();
			op1 = pila.top(); pila.pop();
			pila.push(pow(op1, op2));
			break;
		case '*':
			op2 = pila.top(); pila.pop();
			op1 = pila.top(); pila.pop();
			pila.push(op1*op2);
			break;
		case '/':
			op2 = pila.top(); pila.pop();
			op1 = pila.top(); pila.pop();
			rsl = suma(op1, op2);
			pila.push(rsl);
			break;
		case '+':
			op2 = pila.top(); pila.pop();
			op1 = pila.top(); pila.pop();
			pila.push(op1+op2);
			break;
		case '-':
			op2 = pila.top(); pila.pop();
			op1 = pila.top(); pila.pop();
	
			pila.push(op1 - op2);
			break;
		case '!':

		default:
			string aux = "";
			while (p[i] != ' ')
				aux += string(1, p[i++]);
			pila.push(atof(aux.c_str()));
			i--;
		}
	}
	return pila.top();
}

double CFunciones::suma(double a,double b) {
	n = _sumaE(a,b);
		return n;
}
int CFunciones::resta() {
	return 0;
}
int CFunciones::mult() {
	return 0;
}
int CFunciones::divi() {
	return 0;
}

double CFunciones::elevarCuadrado(double numero) {
	double expo = numero;
	expo = numero*numero;
	return expo;
}

double CFunciones::valorAbsoluto(double numero) {
	int a = valorAbs(numero);
	return a;
}
double CFunciones::raizCuadrada(double numero) {
	return 0;
}
int CFunciones::factorial(int numero) {
	n = 1;
	for (int i = 1;i <= numero;i++) {
		n = n*i;
	}
	return n;
}
