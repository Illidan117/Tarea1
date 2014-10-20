#ifndef EVALUADOR_H
#define EVALUADOR_H

#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;

void evaluar();

int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
int dividir(int a, int b);
int getMayor(int a, int b);
int getMenor(int a, int b);
int getMayor(int a, int b, int c);
void setValor(int arreglo[], int valor, int posicion);
int getValor(int arreglo[], int posicion);
int getMayor(int arreglo[], int tamano);
int getMenor(int arreglo[], int tamano);
int getPromedio(int arreglo[], int tamano);

#endif // EVALUADOR_H
