#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string oracion;
    cout << "Ingrese una oracion: ";
    getline(std::cin, oracion);

    int contadorA = 0, contadorE = 0, contadorI = 0, contadorO = 0, contadorU = 0;

    for(char caracter : oracion){
        char caracterMinuscula = tolower(caracter);
        switch (caracterMinuscula) {
            case 'a':
                contadorA++;
                break;
            case 'e':
                contadorE++;
                break;
            case 'i':
                contadorI++;
                break;
            case 'o':
                contadorO++;
                break;
            case 'u':
                contadorU++;
                break;
            default:
                break;
        }
    }

    std::cout << "\nCantidad de vocales en la oracion:\n";
    std::cout << "A: " << contadorA << "\n";
    std::cout << "E: " << contadorE << "\n";
    std::cout << "I: " << contadorI << "\n";
    std::cout << "O: " << contadorO << "\n";
    std::cout << "U: " << contadorU << "\n";

    return 0;
}
