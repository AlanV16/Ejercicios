#include <iostream>
using namespace std;

/*1-	Manejo de Arreglos: Escribe un programa que solicite al usuario ingresar 
10 números enteros. Luego, encuentra el promedio de los números ingresados y 
muestra cuántos números son mayores que el promedio.*/

int main(){
    const int x=10;
    int mayoresProm=0, suma=0, numeros[x];
    double promedio;

    for(int i=0; i<x; i++){
        cout<<"Ingrese el numero "<<(i+1)<<": "<<endl;
        cin>>numeros[i];
        suma+=numeros[i];
    }

    promedio= suma/x;

    cout<<"El promedio de los "<<x<<" es: "<<promedio<<endl;

    for(int i=0; i<x; i++){
        if(numeros[i]>promedio){
            mayoresProm++;
        }
    }

    cout<<"Hay "<<mayoresProm<<" numeros mayores que el promedio"<<endl;

    return 0;
}