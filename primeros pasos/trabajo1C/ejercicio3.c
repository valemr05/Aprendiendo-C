/*
-Fecha de publicación: 11/08/2023
-Hora: 11:20 PM
-versión de su código: 1.0
-Autor. Ing(c) Valeria Muñoz Ramirez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- este programa recibe el ancho y largo de un rectangulo e imprime su perimetro. 
*/

#include <stdio.h>

 int main(){
    float width, height, perimeter;
    printf ("Por favor digite el ancho del rectangulo: ");
    scanf("%f", &width);
    printf ("Por favor digite el largo del rectangulo: ");
    scanf("%f", &height);
    perimeter = (width * 2) + (height*2);
    printf("El perimetro de un rectangulo con ancho %f y largo %f es de: %f", width, height, perimeter);
    return 0;
 }

