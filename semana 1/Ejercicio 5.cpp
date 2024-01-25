#include <iostream>
using namespace std;

//Ejercicio 5
//Este programa nos ayuda a 
//resolver el promedio de x numeros
int main(){

    double notas=0, suma=0, promedio=0, cantidad, i;
    cout<<"Calcularemos el promedio de sus notas, cuantas notas desea calcular?\n";
    cin>>cantidad;
    for ( i=1; i<=cantidad; i++)
    {
        cout<<"Introduce la "<<i<< " nota: ";
        cin>>notas;
        suma=suma+notas;
    }
    promedio=suma/cantidad;
    cout<<"El promedio de las notas es: "<<promedio<<endl;
    return 0;
}