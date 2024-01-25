#include <iostream>
using namespace std;



int main(){
    int opcion;
    int x=4;
    const string embutidos[x]={"tocino","jamonada","otro","otro"};
    cout<<"Bienvenido al inventario de comida FIIA"<<endl;
    cout<<"1.Categorias"<<endl;
    cout<<"2.Almacen"<<endl;
    cout<<"Ingrese una opcion"<<endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        short int opcion;
        cout<<"1.Embutidos"<<endl;
        cout<<"2.Nectares"<<endl;
        cout<<"3.Agregar nueva categoria"<<endl;
        cout<<"4.Elimnar categoria"<<endl;
        cout<<"5.Regresar al incio"<<endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout<<"La lista de embutidos son: "<<endl;
            for(int i=0; i<x; i++){
                cout<<i+1<<": "<<i<<endl;
            }
            break;
        case 2:
            cout<<"La lista de nectares son: "<<endl;
            for(int i=0; i<x; i++){
                cout<<i+1<<": "<<i<<endl;
            }
            break;
        
        default:
            break;
        }
        
    case 2:
        int opcion1;
        cout<<"1.Ver categorias"<<endl;
        cout<<"2.Regresar al incio"<<endl;
        cin>>opcion;
        switch (opcion1)
        {
        case 1:
            cout<<"1.Frutas"<<endl;
            cout<<"2.Carnes"<<endl;
            cout<<"3.Verduras"<<endl;
            cout<<"4.Lacteos"<<endl;
            cout<<"5.Añadir"<<endl;
            cout<<"6.Eliminar"<<endl;
            cout<<"7. regresar al inicio"<<endl;
            break;
        
        default:
            break;
        }
    default:
        break;
    }
}