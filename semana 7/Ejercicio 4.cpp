#include <iostream>
using namespace std;

bool dividir(double &resultado, double numerador, double denominador) {
    if (denominador != 0) {
        resultado = numerador / denominador;
        return true;
    } else {
        return false;
    }
}

int main() {
    double resultado;
    if (dividir(resultado, 12.0, 2.0)) {
        cout<<"La division es: "<<resultado<<endl;
    } else {
        cout<< "No se puede dividir por cero."<<endl;
    }
    return 0;
}
