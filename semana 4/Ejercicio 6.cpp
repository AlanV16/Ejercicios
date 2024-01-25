#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int respCorrectas=0, respIncorrectas=0;
    bool continuarJugando = true;
    string respuesta1,respuesta2,validacion;

    while(continuarJugando){
        //pregunta 1
        cout<<"Pregunta 1: Cual es la capital de Peru?\n";
        getline(cin, respuesta1);

        if(respuesta1=="Lima" || respuesta1=="lima"){
            cout<<"Correcto, ganas un punto"<<endl;
            respCorrectas++;
        }
        else{
            cout<<"Incorrecto"<<endl;
            respIncorrectas++;
        }
        //pregunta 2
        cout<<"Pregunta 2: que poligono tiene 3 lados?\n";
        cin>>respuesta2;
        if(respuesta2=="Triangulo" || respuesta2=="triangulo"){
            cout<<"Correcto, ganas un punto"<<endl;
            respCorrectas++;
        }
        else{
            cout<<"Incorrecto"<<endl;
            respIncorrectas++;
        }

        cout<<"Desea continuar?(Si//No)"<<endl;
        cin>>validacion;

        if(validacion=="SI"||validacion=="si"){
            cout<<"Empecemos de nuevo"<<endl;
            continuarJugando=true;
            cin.ignore();
        }
        else{
            cout<<"Gracias por jugar"<<endl;
            continuarJugando=false;
        }
    }
    return 0;
}