#include <iostream>
#include <cmath>
using namespace std;

//Ejercicio 4
//Este ejercicio nos ayudara a calcular 
//el binomio al cuadrado

int main(){

    int a, b, resultado;
    cout<<"recordemos que el binomio al cuadrado consiste en (a+b)^2, por ello, por favor ingresar el valor de a: ";
    cin>> a;
    cout<<"por favor ingresar el valor de b: ";
    cin>> b;
    resultado= pow(a,2) + 2*a*b + pow(b,2);
    cout<<"El resultado es: "<< resultado;

    return 0;
}