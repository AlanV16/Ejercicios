#include <stdio.h>

int main(){

    printf("Bienvenido, vamos a calcular el area y perimetro de su triangulo");
    printf("\n1.Area");
    printf("\n2.Perimetro");
    int opcion;
    printf("\nEscoja una opcion: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
        case 1:
            printf("Ingrese la base: ");
            int base;
            scanf("%d", &base);
            printf("Ingrese la altura: ");
            int altura;
            scanf("%d", &altura);
            float area; 
            area= (base * altura) / 2;
            printf("El area es: %f", area);
            break;

        case 2:
            printf("Ingrese la base: ");
            int base2;
            scanf("%d", &base2);
            printf("Ingrese lado 1: ");
            int lado1, lado2;
            scanf("%d", &lado1);
            printf("Ingrese lado 2: ");
            scanf("%d", &lado2);
            int perimetro; 
            perimetro= base2 + lado1 + lado2;
            printf("El perimetro es: %d", perimetro);
            break;

        default:
            break;
    }

    return 0;
}