#include <iostream>
using namespace std;

//Ejercicio numero 1
//el siguiente codigo pide al usuario 
//3 numeros enteros para sumar
int main(){

    int num1, num2, num3, resultado;
    cout << "ingrese el primer numero: ";
    cin >> num1;
    cout<<"Ingrese el segundo numero: ";
    cin >> num2;
    cout<<"Ingrese el tercer numero: ";
    cin >> num3;
    resultado = num1 + num2 + num3;
    cout<<"El resultado de los 3 numeros es: "<< resultado;
    return 0;
}