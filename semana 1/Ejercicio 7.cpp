#include <iostream>
using namespace std;

//Ejercicio 7
//simularemos un cajero
//el usuario elijira depositar, retirar o transferir 
//a un tercero con un monto en su cuenta de 1000 soles

int main(){

    string numCuenta;
    int opcion;
    double deposita, transferir, saldo=1000, retiro;
    
    cout << "Bienvenido al cajero" << endl;
    cout <<"Su sueldo actual es de: "<<saldo << endl;
    cout << "1. Depositar" << endl;
    cout << "2. Retirar" << endl;
    cout << "3. Transferir" << endl;
    cout << "4. Salir" << endl;
    cout <<"Por favor ingrese la opcion: " << endl;
    cin>>opcion;
    
    switch(opcion){
        case 1: 
            cout<<" Cuanto desea despositar en su cuenta?"<<endl;
            cin>>deposita;
            saldo+=deposita;
            cout<<"Su sueldo actual es de: "<<saldo << endl;
            cout <<"Gracias por preferirnos :)";
            break;
        case 2: 
            cout<<"Cuanto desea retirar de su cuenta?"<<endl;
            cin>>retiro;
            saldo-=retiro;
            cout<<"Su sueldo actual es de: "<<saldo << endl;
            cout <<"Gracias por preferirnos :)";
            break;
        case 3: 
            cout<<"Cual es el numero del cuenta?"<<endl;
            cin>>numCuenta;
            cout<<"Cuanto desea transferir?"<<endl;
            cin>>transferir;
            saldo-=transferir;
            cout <<"Transferencia realizada con exito"<<endl;
            cout <<"Su sueldo actual es de: "<<saldo << endl;
            cout <<"Gracias por preferirnos :)";
            break;
        case 4:
            cout<<"Vuelva pronto";
            break;
        default:
            cout<<"Opcion incorrecta";
            break;

    }
}