#include <iostream>
#include <string>
using namespace std;

int main(){

    string matriz1[3][3];
    string matrizResultado;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Ingrese la palabra en la celda ["<<i+1<<"]["<<j+1<<"]:";
            cin >> matriz1[i][j];
        }
    }

    cout<<"la matriz resultado es: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matrizResultado += matriz1[i][j] + " ";
        }
    }
    cout<<matrizResultado<<endl;

    return 0;
}
