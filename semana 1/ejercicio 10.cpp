#include <cmath>
#include <iostream>
using namespace std;

//Ejercicio 10
//Este codigo sera una calculadora
//donde se ingresaran los numeros y se escogera en
//sumar, restar, multiplicar, dividir, potencia y raiz

int main(){

    int opcion;
    double suma=0, resta=0, multiplicacion=1, division, potencia, raiz, num1, num2,cantidad,i;
    cout<<"Bienvenido a la calculadora"<<endl;
    cout<<"1. Sumar"<<endl;
    cout<<"2. Restar"<<endl;
    cout<<"3. Multiplicar"<<endl;
    cout<<"4. Dividir"<<endl;
    cout<<"5. Potencia"<<endl;
    cout<<"6. Raiz"<<endl;
    cout<<"7. Salir"<<endl;
    cout<<"Elija una opcion"<<endl;
    cin>>opcion;

    switch(opcion){
        case 1:
            cout<<"Cuantos numeros desea sumar?"<<endl;
            cin>>cantidad;
            for(i=0; i<cantidad; i++){
                cout<<"Digite el numero "<<i+1<<":";
                cin>>num1;
                suma+=num1;
            }
            cout<<"La suma es: "<<suma<<endl;
            break;
        case 2: 
            cout<<"Cuantos numeros desea restar?"<<endl;
            cin>>cantidad;
            cout<<"Ingrese el primer numero:";
            cin>>resta;
            for(i=1; i<cantidad; i++){
                cout<<"Digite el numero "<<i+1<<":";
                cin>>num2;
                resta-=num2;
            }
            cout<<"La resta es: "<<resta<<endl;
            break;
        case 3:
            cout<<"Cuantos numeros desea multiplicar?"<<endl;
            cin>>cantidad;
            for(i=0;i<cantidad;i++){
                cout<<"Digite el numero "<<i+1<<":";
                cin>>num1;
                multiplicacion*=num1;
            }
            cout<<"La multiplicacion es: "<<multiplicacion<<endl;
            break;
        case 4: 
            cout<<"Digite los numeros a dividir, en el orden de dividendo y divisor:"<<endl;
            cout<<"Ingrese el dividendo: ";
            cin>>num1;
            cout<<"Ingrese el divisor: ";
            cin>>num2;
            division=num1/num2;
            cout<<"La division es: "<<division<<endl;
            break;
        case 5:
            cout<<"Ingrese el numero a potenciar: ";
            cin>>num1;
            cout<<"Ingrese el exponente: ";
            cin>>num2;
            potencia=pow(num1,num2);
            cout<<"La potencia es: "<<potencia<<endl;
            break;
        case 6:
            cout<<"Ingrese el numero a sacar raiz: ";
            cin>>num1;
            raiz=sqrt(num1);
            cout<<"La raiz de "<<num1<<" es: "<<raiz<<endl;
            break;
        case 7:
            cout<<"nos vemos en otro momento :)";
            break;
        default:
            cout<<"opcion incorrecta"<<endl;
            break;
    }
    return 0;
}