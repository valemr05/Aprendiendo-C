/*
- Fecha de publicación: 12/08/2023
- Hora: 12:10 AM
- versión de su código: 1.0
- Autor. Ing(c) Valeria Muñoz Ramirez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- este programa encuentra el valor del ángulo faltante de un triángulo al recibir el valor de los otros dos
  ángulos, se debe tener en cuenta que los 3 ángulos de un triángulo suman 180 °.

- cat1: ALmecena el valor del primer angulo del triangulo
- cat2: ALmecena el valor del segundo angulo del triangulo
- cat3: ALmecena el valor del angulo faltante del triangulo

-Salvedad: Para valores fuera de este rango, no garantizamos los
resultados.
*/

#include <stdio.h>

int main(){
    int cat1, cat2, cat3;
    printf("Por favor digite el valor del primer angulo:");
    scanf("%i", &cat1);
    printf("Por favor digite el valor del segundo angulo:");
    scanf("%i", &cat2);
    cat3 = 180 - (cat1 + cat2);
    printf("El valor del tercer angulo de un triangulo con angulos de %i y %i es de: %i.", cat1, cat2, cat3);
}