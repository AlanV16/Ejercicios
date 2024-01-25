#include <iostream>
using namespace std;

int main(){
    
    int const Nmatriz = 3;
    int matriz[Nmatriz][Nmatriz];
    int matrizTranspuesta[Nmatriz][Nmatriz];

    cout<<"Ingrese los valores de la matriz"<<endl;
    for(int i=0;i<Nmatriz;i++){
        for(int j=0;j<Nmatriz;j++){
            cout<<"Ingrese los elementos de la posicion ["<<i<<"]"<<"["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }

    //Matriz transpuesta
    for(int i=0;i<Nmatriz;i++){
        for(int j=0;j<Nmatriz;j++){
            matrizTranspuesta[j][i]=matriz[i][j];
        }
    }

    //Mostrar matrices
    cout<<"Matriz original:"<<endl;
    for(int i=0;i<Nmatriz;i++){
        for(int j=0;j<Nmatriz;j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"Matriz transpuesta:"<<endl;
    for(int i=0;i<Nmatriz;i++){
        for(int j=0;j<Nmatriz;j++){
            cout<<matrizTranspuesta[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}