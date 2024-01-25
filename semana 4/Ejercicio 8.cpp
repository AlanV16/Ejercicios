#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros;

    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;

    cout << "Ingrese los elementos del vector:\n";
    for (int i = 0; i < n; ++i) {
        int elemento;
        cin >> elemento;
        numeros.push_back(elemento);
    }

    int mayorElemento = numeros[0];

    for (int i = 1; i < n; ++i) {
        if (numeros[i] > mayorElemento) {
            mayorElemento = numeros[i];
        }
    }

    cout << "El mayor elemento en el vector es: " << mayorElemento << "\n";

    return 0;
}
