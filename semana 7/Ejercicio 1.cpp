#include <iostream>
#include <string>
using namespace std;
string concatenar(string a, string b){
    string conca;
    conca = a+b;
    return conca;
}

int main() {
    string resultado = concatenar("Hola, ", "mundo!");
    cout<<"La palabra concatenada es: "<< resultado<<endl;
    return 0;
}
