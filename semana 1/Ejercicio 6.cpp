#include<iostream>
using namespace std;

//Ejercicio 6
//crear un login de usuario, pedir un nombre y una 
//contraseña, volver a pedir contraseña
//una y otra vez hasta que la contraseña sea valida

int main(){
	string nombre="Admin";
	int password1=0, password2=0;
	cout<<"ingrese nombre de cuenta a crear: \n";
	cin>>nombre;
	cout<<"Ingrese clave: \n";
	cin>>password1;
	do{
		cout<<"Ingrese nuevamente la clave: \n";
		cin>>password2;
		if(password2!=password1)
			cout<<("clave invalida\n");
	}while(password1!=password2);
	cout<<"La cuenta a sido creada con exito\n";
	
	return 0;
	
}