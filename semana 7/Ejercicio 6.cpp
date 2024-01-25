#include <iostream>
using namespace std;

void doble(int &x) {
    x *= 2;
}

int main() {
    int valor = 10;
    doble(valor);
    cout << "Doble: "<<valor<<endl;
    return 0;
}
