#include <iostream>
using namespace std;

int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int resultado = potencia(3, 3);
    cout << "3 elevado a la 3 es: " << resultado <<endl;
    return 0;
}
