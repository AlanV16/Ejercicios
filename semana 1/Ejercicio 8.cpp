#include <iostream>
using namespace std;

//Ejercicio 8
//El siguiente programa pide la edad 
//para evaluar si es mayor de edad y
//aprueba para tener licencia de conducir

int main(){

    int edad, nota;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad>=18){
        cout << "por favor ingrese su nota de examen: "<<endl;
        cin >> nota;

        if (nota>=11){
            cout << "Aprobado, usted merece su licencia de conducir" << endl;
        }
        else{
        cout << "Reprobado, usted no merece su licencia de conducir" << endl;
        }
    }
    else{
        cout<<"Es menor de edad y no puede conducir"<<endl;
    }   
    return 0;
}