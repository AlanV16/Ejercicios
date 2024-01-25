#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

//ejercicio 9
//El siguiente codigo nos ayudara
//a resolver el area y volumen de un cilindro

int main(){

    int opcion;
    double radio, altura, area, volumen;
    cout << "Bienvenido al programa para calcular el area y el volumen de un cilindro" << endl;
    cout << "1. Calcular el area" << endl;
    cout << "2. Calcular el volumen" << endl;
    cout << "3. Salir" << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    switch(opcion){
        case 1:
            cout << "Ingrese el radio del cilindro: ";
            cin >> radio;
            cout << "Ingrese la altura del cilindro: ";
            cin >> altura;
            area = 2*M_PI*radio*(radio+altura);
            cout << "El area del cilindro es: " << area << endl;
            break;
        case 2:
            cout << "Ingrese el radio del cilindro: ";
            cin >> radio;
            cout << "Ingrese la altura del cilindro: ";
            cin >> altura;
            volumen = M_PI*pow(radio,2)*altura;
            cout << "El volumen del cilindro es: " << volumen << endl;
            break;
        case 3: 
            cout << "gracias por elegirnos";
            break;
        default:
            cout<<"Opcion invalida";
            break;
    }
}
