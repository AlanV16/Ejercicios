#include <stdio.h>
#include <cmath>

int main(void) {

    printf("Bienvenido, vamos a calcular el area, diagonal y perimetro de su rectangulo.");
    printf("\n1. El area");
    printf("\n2. El diagonal");
    printf("\n3. El perimetro");
    int opcion, base, altura,area,perimetro;
    float diagonal;
    printf("\ndigite una opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {
        
        case 1:
            printf("Ingrese la base: ");
            scanf("%d", &base);
            printf("Ingrese la altura: ");
            scanf("%d", &altura);
            area = base * altura;
            printf("El area es: %d", area);
            break;
        
        case 2:
            printf("Ingrese la base: ");
            scanf("%d", &base);
            printf("Ingrese la altura: ");
            scanf("%d", &altura);
            diagonal = sqrt(pow(base, 2) + pow(altura,2));
            printf("El diagonal es: %f", diagonal);
            break;
        
        case 3:
            printf("Ingrese la base: ");
            scanf("%d", &base);
            printf("Ingrese la altura: ");
            scanf("%d", &altura);
            perimetro = 2*(base + altura);
            printf("El perimetro es: %d", perimetro);
            break;
        default:
            break;

    }

    return 0;
}