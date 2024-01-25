#include <stdio.h>
#include <cmath>
int main(){
    
    printf("Bienvenido, vamos a calcular el semi perimetro y formula de heron de su triangulo");
    double area, Sp,a,b,c; 
    printf("\nIngrese el lado a: ");
    scanf("%lf",&a);
    printf("Ingrese el lado b: ");
    scanf("%lf",&b);
    printf("Ingrese el lado c: ");
    scanf("%lf",&c);
    Sp = (a+b+c)/2;
    area = sqrt(Sp*(Sp-a)*(Sp-b)*(Sp-c));
    printf("El semi perimetro es: %lf",Sp);
    printf("\nEl area es: %lf",area);
    return 0;
}