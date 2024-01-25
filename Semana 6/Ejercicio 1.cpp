#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num_elementos;
    cout << "Ingrese la cantidad de elementos en el vector: ";
    cin >> num_elementos;

    vector<int> vector;

    for (int i = 0; i < num_elementos; ++i) {
        int valor;
        cout << "Ingrese el valor numero " << i + 1 << ": ";
        cin >> valor;
        vector.push_back(valor);
    }

    sort(vector.begin(), vector.end());

    cout << "Vector ordenado de manera ascendente: ";
    for (const auto& elemento : vector) {
        cout << elemento << " ";
    }

    return 0;
}
