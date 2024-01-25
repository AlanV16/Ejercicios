#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> caracteres;
    int num_caracteres;
    char caracter_a_contar;
    cout << "Ingrese la cantidad de caracteres en el vector: ";
    cin >> num_caracteres;

    for (int i = 0; i < num_caracteres; ++i) {
        char caracter;
        cout << "Ingrese el carácter " << i + 1 << ": ";
        cin >> caracter;
        caracteres.push_back(caracter);
    }
    
    cout << "Ingrese el carácter que desea contar: ";
    cin >> caracter_a_contar;
    int contador = 0;

    for (const auto& c : caracteres) {
        if (c == caracter_a_contar) {
            contador++;
        }
    }

    cout << "El carácter '" << caracter_a_contar << "' aparece " << contador << " veces en el vector." <<endl;
    return 0;
}
