#include "Evaluador.h"

string getPrimerElemento(stack<string> mi_cola);


void evaluar()
{
    float nota = 0;


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


    cout<<"Ejercicio sumar:\t\t";
    if(sumar(5,3)==8 && sumar(2,1)==3 && sumar(1000,1234)==2234)
    {
        nota+=0.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }


    cout<<"Ejercicio restar:\t\t";
    if(restar(5,3)==2 && restar(2,1)==1 && restar(5,7)==-2)
    {
        nota+=0.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio multiplicar:\t\t";
    if(multiplicar(5,3)==15 && multiplicar(2,1)==2 && multiplicar(5,-7)==-35)
    {
        nota+=0.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }


    cout<<"Ejercicio dividir:\t\t";
    if(dividir(9,3)==3 && dividir(2,1)==2 && dividir(8,2)==4)
    {
        nota+=0.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getMayor:\t\t";
    if(getMayor(9,3)==9 && getMayor(1,2)==2 && getMayor(8,2)==8 && getMayor(8,16)==16)
    {
        nota+=0.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getMenor:\t\t";
    if(getMenor(9,3)==3 && getMenor(1,2)==1 && getMenor(8,2)==2 && getMenor(8,16)==8)
    {
        nota+=0.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getMayor:\t\t";
    if(getMayor(9,3,5)==9 && getMayor(1,3,2)==3 && getMayor(2,8,2)==8 && getMayor(8,5,16)==16)
    {
        nota+=0.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio setValor:\t\t";
    int arr[]={1,2,3};
    setValor(arr,4,1);
    setValor(arr,9,2);
    int arr2[]={10,20};
    setValor(arr2,30,1);
    if(arr[0]==1 && arr[1]==4 && arr[2]==9 && arr2[0]==10 && arr2[1]==30)
    {
        nota+=0.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getValor:\t\t";
    int a1[]={3,4,2,1};
    int a2[]={10,20,30};
    if(getValor(a1,0)==3 && getValor(a1,1)==4 && getValor(a2,0)==10 && getValor(a2,1)==20)
    {
        nota+=0.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }


    cout<<"Ejercicio getMayor:\t\t";
    if(getMayor(a1,4)==4 && getMayor(a2,3)==30)
    {
        nota+=0.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getMenor:\t\t";
    if(getMenor(a1,4)==1 && getMenor(a2,3)==10)
    {
        nota+=0.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getPromedio:\t\t";
    if(getPromedio && getPromedio(a2,3)==20)
    {
        nota+=0.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/6"<<endl;
}
