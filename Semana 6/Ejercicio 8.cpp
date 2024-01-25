#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Libro{
    string titulo;
    string autor;
    int anio;
};

int main(){
    vector<Libro> libros;
    int num_libros;
    cout << "Ingrese la cantidad de libros a registrar: ";
    cin >> num_libros;

    for(int i = 0; i<num_libros; i++){
        Libro libro;
        cout<<"Ingrese los datos del libro numero "<<i+1<<":"<<endl;
        cout<<"Titulo: ";
        cin.ignore();
        getline(cin,libro.titulo);
        cout<<"Autor: ";
        cin.ignore();
        getline(cin,libro.autor);
        cout<<"Anio de publicacion: ";
        cin>>libro.anio;
        libros.push_back(libro);
    }

    cout<<"Informacion de los libros:"<<endl;
    for(const auto libro :libros){
        cout<<"Titulo: "<<libro.titulo<<endl;
        cout<<"Autor: "<<libro.autor<<endl;
        cout<<"anio de publicacion: "<<libro.anio<<endl;
    }
    
    return 0;
}