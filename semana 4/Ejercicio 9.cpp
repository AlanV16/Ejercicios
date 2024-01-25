#include <iostream>
#include <vector>
using namespace std;

bool esPrimo(int numero) {
    if (numero < 2) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int inicio, fin;

    cout << "Ingrese el numero de inicio: ";
    cin >> inicio;
    cout << "Ingrese el numero de fin: ";
    cin >> fin;

    vector<int> primos;

    for (int i = inicio; i <= fin; ++i) {
        if (!esPrimo(i)) {
            continue;
        }
        primos.push_back(i);
    }

    cout << "\nNumeros primos en el rango [" << inicio << ", " << fin << "]:\n";
    for (int primo : primos) {
        cout << primo << " ";
    }
    cout << "\n";

    return 0;
}
