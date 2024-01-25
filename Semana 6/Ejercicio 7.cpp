#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct alumnos{
    string nombre;
    int edad;
    double calificacion;
};

int main(){
    vector<alumnos> Alumnos;
    int num_alumnos;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> num_alumnos;

    for(int i = 0; i<num_alumnos; i++){
        alumnos Alumno;
        cout<<"Ingrese los datos del alumno numero "<<i+1<<":"<<endl;
        cout<<"Nombre: ";
        cin>> Alumno.nombre;
        cout<<"Edad: ";
        cin>> Alumno.edad;
        cout<<"Calificacion: ";
        cin>>Alumno.calificacion;
        Alumnos.push_back(Alumno);
    }

    cout<<"Informacion de los alumnos"<<endl;
    for(const auto& Alumno :Alumnos){
        cout<<"Nombre: "<<Alumno.nombre<<endl;
        cout<<"Edad: "<<Alumno.edad<<endl;
        cout<<"Calificacion: "<<Alumno.calificacion<<endl;
    }
    
    return 0;
}

