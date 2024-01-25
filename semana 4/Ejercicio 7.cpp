#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vectorOriginal;
    int n;

    cout << "Ingrese el tamaño del vector: ";
    cin >> n;

    cout << "Ingrese los elementos del vector:\n";
    for (int i = 0; i < n; ++i) {
        int elemento;
        cin >> elemento;
        vectorOriginal.push_back(elemento);
    }

    for (size_t i = 0; i < vectorOriginal.size(); ++i) {
        for (size_t j = i + 1; j < vectorOriginal.size(); ++j) {
            if (vectorOriginal[i] == vectorOriginal[j]) {
                vectorOriginal.erase(vectorOriginal.begin() + j);
                --j;
            }
        }
    }

    cout << "\nVector sin elementos duplicados:\n";
    for (const int& elemento : vectorOriginal) {
        cout << elemento << " ";
    }
    cout << "\n";

    return 0;
}