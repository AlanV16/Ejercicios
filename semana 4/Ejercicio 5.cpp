#include <iostream>
#include <string>
using namespace std;

string cifradoCesar(const string& cadena, int clave){
    string resultado= "";

    for (char letra : cadena) {
        if (isalpha(letra)) {
            char base = (isupper(letra)) ? 'A' : 'a';
            resultado += static_cast<char>((letra - base + clave + 26) % 26 + base);
        } else 
            resultado += letra;
    }
    return resultado;
}

int main(){
    string cadena;
    int clave;
    cout<<"Ingrese una cadena: ";
    getline(cin, cadena);
    cout<<"Ingrese un numero entero de clave de cifrado: ";
    cin>>clave;

    string cifrado=cifradoCesar(cadena,clave);
    cout<<"\nCadena cifrada: "<<cifrado<<"\n";

    return 0;
}