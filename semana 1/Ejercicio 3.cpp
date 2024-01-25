#include <iostream>
#include <cmath>
using namespace std;

//Ejercicio 3
//Este programa resuelve la formula general

int main(){
    double x1, x2, a, b, c;
    cout<<"Te ayudare a calcular la formula general, por favor ingrese el valor de a: ";
    cin>>a;
    cout<<"por favor ingrese el valor de b: ";
    cin>>b;
    cout<<"por favor ingrese el valor de c: ";
    cin>>c;
    cout<<c;
    x1= (-b + (sqrt(pow(b,2)-4*a*c)))/(2*a);
    x2= (-b - (sqrt(pow(b,2)-4*a*c)))/(2*a);
    cout<<"la solucion x1 es: "<<x1<<"\n";
    cout<<"la solucion x2 es: "<<x2<<"\n";
    return 0;
}