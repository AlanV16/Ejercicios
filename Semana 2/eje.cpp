#include <iostream>
using namespace std;

int Sumar(int a, int b, int c, int d, int e){
    int respuesta = a+b+c+d+e;
    return respuesta;

}

void mostra(int respue){
    cout<<"La sumatoria de los 5 numeros es: "<<respue<<endl;
}

int llenar(){
    int numero = 0;
    cout<<"Ingrese un numero: "<<endl;
    cin >> numero;
    return numero;
}

int main(){
    int a,b,c,d,e,resp;
    a=llenar();
    b=llenar();
    c=llenar();
    d=llenar();
    e=llenar();
    resp =Sumar(a,b,c,d,e);
    mostra(resp);
}