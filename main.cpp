#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
      return a + b;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a - b;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a * b;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    return a / b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if(a>b) //compara la variable con a la b para encontrar el mayor
    return a; //regresa a si es mayor
    else // si no
    return b; //regresa b si es mayor
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if(a<b) //compara la variable a con la variable b para encontrar el menor
    return a; //retorna a si es menor que b
    else // si no
    return b; // retorna b si a es mayor que b
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    if(a>b && a>c) // compara la variable a con la variable b
    return a; // de ser a mayor que ambas retorna a
    else if(b>a && b>c) // si b es mayor que a y c retorna b
    return b; // retorna b
    else // si todo lo demas es falso
    return c; //retorna c
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo[posicion]= valor; //le da un valor a la posicion definida con el valor de la variable valor (valga la redundancia)
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
     return arreglo[posicion]; //retorna el dato que se encuentra en la posicion definida del arreglo
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
  int vault = 0; //almacen
  for(int x=0; x<tamano-1; x++) //ciclo for que tiene como limite el tamaño otorgado
       {
          for(int z=0; z < tamano-x-1; z++)  //ciclo for anidado para recorrer el arreglo
          {
            if(arreglo[z] > arreglo[z+1]) //compara la posicion en Z con la posicion en Z+ 1 (con el siguiente)
            {
                vault= arreglo[z+1]; //de ser mayor se guarda en el almacen (vault)
                arreglo[z+1]= arreglo[z]; //luego reemplaza el valor en Z+1 con el de la posicion actual
                arreglo[z]=vault; //luego iguala la posicion actual con el valor en el almacen (vault)
		//al final los valores del arreglo seran reemplazados por el valor mas alto
            }
     }
    }
        return arreglo[tamano-1]; //devuelve el mayor
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
  int vault = 0;
  for(int x=0; x<tamano-1; x++) //ciclo for que tiene como limite el tamaño otorgado
       {
          for(int z=0; z < tamano-x-1; z++)//ciclo for anidado para recorrer el arreglo
          {
            if(arreglo[z] > arreglo[z+1]){//compara la posicion en Z con la posicion en Z+ 1 (con el siguiente)
                vault= arreglo[z+1];//de ser menor se guarda en el almacen (vault)
                arreglo[z+1]= arreglo[z];//luego reemplaza el valor en Z+1 con el de la posicion actual
                arreglo[z]=vault;//luego iguala la posicion actual con el valor en el almacen (vault)
		//al final los valores del arreglo seran reemplazados por el valor mas bajo
            }
          }
    }
        return arreglo[0]; //devuelve el menor
           }
int getPromedio(int arreglo[], int tamano)
{
    int acumulador = 0; //almacen
	int prom = 0; // para el promedio
	for(int x = 0; x < tamano; x++) //ciclo for para recorrer el arreglo
	{
	acumulador = acumulador + arreglo[x]; //el acumulador es igual al acumulador + el valor en la posicion actual del arreglo que es igual a X
	prom= acumulador/tamano; //se divide el acumulador por el tamaño definido para sacar el promedio
	}
    return prom;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
