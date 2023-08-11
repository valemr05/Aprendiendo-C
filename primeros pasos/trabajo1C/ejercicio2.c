/*
-Fecha de publicación: 11/08/2023
-Hora: 11:10 PM
-versión de su código: 1.0
-Autor. Ing(c) Valeria Muñoz Ramirez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- este programa recibe el radio de una esfera e imprime cual es su volumen. 
*/

#include <stdio.h>
#include <math.h> 

int main (){
    float radio, volumen, pi= 3.14159265;
    printf ("Por favor digite el radio de la esfera:");
    scanf("%f", &radio);
    volumen = 4.0/3 * pi * pow (radio,3);
    printf ("El volumen de una esfera de radio %f es de %f", radio, volumen);
    return 0;
}