#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string palabra;
    string palabraMin;
    int longitud;
    cout<<"Ingrese su palabra: "<<endl;
    cin >> palabra;

    //convertir palabra en minuscula
    for(char letra :palabra){
        palabraMin+=tolower(letra);
    }
    
    //Verificación si es una palabra que se escribe igual al revez
    bool valido = true;
    longitud=palabraMin.length();
    for(int i=0; i<longitud/2; i++){
        if(palabraMin[i]!=palabraMin[longitud-i-1]){
            valido=false;
            break;
        }
    }

    if(valido)
        cout<<"La palabra es un palindromo"<<endl;
    else
        cout<<"La palabra no es un palindromo"<<endl;

    return 0;
}