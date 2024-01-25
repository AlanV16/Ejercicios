#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    static const int NUM_CALIFICACIONES = 3;
    float calificaciones[NUM_CALIFICACIONES];
};

float Promedio(const float calificaciones[], int numCalificaciones) {
    if (numCalificaciones == 0) {
        return 0.0f;
    }

    float suma = 0.0f;
    for (int i = 0; i < numCalificaciones; ++i) {
        suma += calificaciones[i];
    }

    return suma / numCalificaciones;
}

int main(){
    vector<Estudiante> estudiantes;
    int numEstudiantes;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> numEstudiantes;

    for (int i = 0; i < numEstudiantes; ++i) {
        Estudiante estudiante;
        cout<<"Ingrese informacion para el estudiante " << i + 1 << ":"<<endl;
        cout<<"Nombre: ";
        cin.ignore();
        getline(cin, estudiante.nombre);

        cout << "Edad: ";
        cin >> estudiante.edad;

        cout<<"Ingrese las calificaciones(separadas por espacios): ";
        for(int j = 0; j < Estudiante::NUM_CALIFICACIONES; ++j){
            cin>> estudiante.calificaciones[j];
        }
        estudiantes.push_back(estudiante);
    }

    cout<<"Promedio de calificaciones para cada estudiante:"<<endl;
    for (const auto& estudiante : estudiantes){
        cout<<"Nombre: "<<estudiante.nombre<<endl;
        cout<<"Edad: "<<estudiante.edad<<endl;

        float promedio = Promedio(estudiante.calificaciones, Estudiante::NUM_CALIFICACIONES);
        cout<<"Promedio de calificaciones: "<<promedio<<endl;
    }

    return 0;
}
