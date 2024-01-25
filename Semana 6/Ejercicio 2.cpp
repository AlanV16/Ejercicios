#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> palabras;
    int num_palabras;
    string resultado;
    cout << "Ingrese la cantidad de palabras: ";
    cin >> num_palabras;

    for (int i = 0; i < num_palabras; ++i) {
        string palabra;
        cout << "Ingrese la palabra " << i + 1 << ": ";
        cin >> palabra;
        palabras.push_back(palabra);
    }

    for (const auto& palabra : palabras) {
        resultado += palabra + " ";
    }

    cout << "Cadena resultante: " <<resultado<<endl;

    return 0;
}
