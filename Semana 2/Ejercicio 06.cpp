#include <stdio.h>

int main(){

    int a,b,c,r;
    double area;
    printf("Bienvenido calcularemos el area del triangulo inscrito");
    printf("\nIngrese lado a del triangulo: ");
    scanf("%d", &a);
    printf("Ingrese lado b del triangulo: ");
    scanf("%d", &b);
    printf("Ingrese lado c del triangulo: ");
    scanf("%d", &c);
    printf("Ingrese el radio del circulo: ");
    scanf("%d", &r);
    area = (a*b*c)/(4*r);
    printf("El area del triangulo es: %.2f", area);

    return 0;
}