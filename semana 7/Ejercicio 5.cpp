#include <iostream>
using namespace std;

void calcularCuadradoCubo(int num, int &cuadrado, int &cubo) {
    cuadrado = num * num;
    cubo = num * num * num;
}

int main() {
    int numero = 4, cuadrado, cubo;
    calcularCuadradoCubo(numero, cuadrado, cubo);
    cout<<"Cuadrado: "<<cuadrado<<", Cubo: "<<cubo<<endl;
    return 0;
}
