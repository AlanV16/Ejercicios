#include <stdio.h>

//el siguiente codigo nos da el area de un trapecio
int main(){

    int area, Bmayor, Bmenor, altura;
    printf("bienvenido, por favor ingresar la base mayor: ");
    scanf("%d", &Bmayor);
    printf("bienvenido, por favor ingresar la base menor: ");
    scanf("%d", &Bmenor);
    printf("bienvenido, por favor ingresar la altura: ");
    scanf("%d", &altura);
    area = ((Bmayor + Bmenor) * altura) / 2;
    printf("el area del trapecio es: %d", area);
    
    return 0;
}