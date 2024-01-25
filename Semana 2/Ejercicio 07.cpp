#include <stdio.h>

int main(){

    int a,b,c,opcion,radio, area;
    double Sperimetro;

    printf("Bienvenido, vamos a calcular el semi perimetro y area de su triangulo inscrito...");
    printf("\n1. Semiperimeto");
    printf("\n2. Area");
    printf("\nIngrese una opcion: ");
    scanf("%d", &opcion);
    switch(opcion){
        case 1:
            printf("Ingrese el lado a: ");
            scanf("%d", &a);
            printf("Ingrese el lado b: ");
            scanf("%d", &b);
            printf("Ingrese el lado c: ");
            scanf("%d", &c);
            Sperimetro = (a+b+c)/2;
            printf("El semi perimetro es: %.2f", Sperimetro);
            break;
        case 2:
            printf("Ingrese el radio: ");
            scanf("%d", &radio);
            printf("Ingrese el semiperimetro: ");
            scanf("%lf", &Sperimetro);
            area = radio * Sperimetro;
            printf("El area es: %d", area);
            break;   
    }
}