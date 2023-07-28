#include <stdio.h>
//Angulo faltante de un triangulo 

int main(){
    int cat1, cat2, cat3;
    printf("Por favor digite el valor del primer angulo:");
    scanf("%i", &cat1);
    printf("Por favor digite el valor del segundo angulo:");
    scanf("%i", &cat2);
    cat3 = 180 - (cat1 + cat2);
    printf("El valor del tercer angulo de un triangulo con angulos de %i y %i es de: %i.", cat1, cat2, cat3);
}