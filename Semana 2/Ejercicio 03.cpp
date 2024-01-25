#include <stdio.h>
#include <cmath>

int main(){

    printf("\nBienvenido, calcularemos el area, perimetro y su lado.");
    printf("\n1. Area");
    printf("\n2. Perimetro");
    printf("\n3. Lado");
    printf("\n4. Salir");

    int opcion, Dmayor, Dmenor, perimetro;
    double area, lado;
    printf("\nIngrese la opcion: ");
    scanf("%d", &opcion);
    
    switch(opcion){
        case 1:
            printf("Ingrese la diagonal mayor: ");
            scanf("%d", &Dmayor);
            printf("Ingrese la diagonal menor: ");
            scanf("%d", &Dmenor);
            area = (Dmayor * Dmenor)/2;
            printf("El area es: %f", area);
            break;
        case 2:
            printf("Ingrese la diagonal mayor: ");
            scanf("%d", &Dmayor);
            printf("Ingrese la diagonal menor: ");
            scanf("%d", &Dmenor);
            lado = sqrt(pow(Dmayor/2, 2) + pow(Dmenor/2, 2));
            printf("El lado es: %lf", lado);
            break;
        case 3:
            printf("Ingrese el lado: ");
            scanf("%lf", &lado);
            perimetro = 4*lado;
            printf("El perimetro es: %d", perimetro);
            break;
        case 4:
            break;
        default:
            printf("Opcion incorrecta");
            break;
    }

    return 0;
}