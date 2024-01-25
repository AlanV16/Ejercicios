#include <iostream>
using namespace std;

//Ejercicio 2
//este programa nos diria el 
//area de un triangulo
int main(){
    double h,b,area;
    cout<<"Ingrese la altura: ";
    cin>>h;
    cout<<"Ingrese la base: ";
    cin>>b;
    area=(h*b)/2;
    cout<<"El area es: "<<area;
    return 0;
}