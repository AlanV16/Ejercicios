#include <iostream>
using namespace std;

int main(){
    
    int matriz1[3][3]={{1,2,3},{3,2,1},{1,2,3}};
    int matriz2[3][3]={{4,5,6},{6,5,4},{4,5,6}};
    int matrizResultado[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matrizResultado[i][j]= matriz1[i][j]+matriz2[i][j];
        }
    }

    cout<<"Matriz resultado: "<<endl;

    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrizResultado[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}