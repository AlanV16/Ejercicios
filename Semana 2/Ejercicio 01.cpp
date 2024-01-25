#include <stdio.h>
#include <cmath>

int main() {
    
    printf("Bienvenido, usted eligira calcular el area, perimetro o diagonal del cuadrado: ");
    printf("\n1. Area");
    printf("\n2. Perimetro");
    printf("\n3. Diagonal\n");

    int opcion,lado;
    double diagonal;
    printf("escoja una opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese la medida de un lado, para calcular el area: ");
            scanf("%d", &lado);
            printf("El area del cuadrado es: %d", lado*lado);
            break;
        case 2:
            printf("ingrese la medida de un lado, para calcular el perimetro: ");
            scanf("%d", &lado);
            printf("El perimetro del cuadrado es: %d", lado*4);
            break;
        case 3:
            printf("Ingrese la medida de un lado para calcular el diagonal:");
            scanf("%d", &lado);
            diagonal = lado*sqrt(2);
            printf("El diagonal del cuadrado es: %lf", diagonal);
            break;
        default:
            break;
    }

    return 0;
}