#include <iostream>
using namespace std;

double multiplicar(double x, double y) {
    double result = x*y;
    return result;
}

int main() {
    double resultado = multiplicar(2.5, 3.7);
    cout <<"La multiplicación es: "<<resultado<<endl;
    return 0;
}
