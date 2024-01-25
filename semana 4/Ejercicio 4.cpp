#include <iostream>
using namespace std;

int main(){
    
    int x;
    cout<<"Ingrese un numero entero positivo"<<endl;
    cin >> x;
    while(x==0){
        cout<<"Ingrese un numero entero positivo"<<endl;
        cin >> x;
    }

    cout<<"Secuencia de collatz para "<<x<<":"<<endl;
    while(x!=1){
        cout<<x<<" ";
        if(x%2==0)
            x/=2;
        else
            x = 3*x+1; 
    }
    cout<<"1\n";
    return 0;
}