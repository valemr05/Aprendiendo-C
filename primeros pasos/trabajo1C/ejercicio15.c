/*
- Fecha de publicación: 13/08/2023
- Hora: 12:30 PM
- versión de su código: 1.0
- Autor. Ing(c) Valeria Muñoz Ramirez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- este programa recibe el valor de x y realiza la siguiente operación ( ( ( x/6 ) + ( 45.0/x ) ) / ( x - ( -8.0/2 ) ) / ( 12.0/sqrt(x) )  / 5.0 + pow(x,4) / sqrt(x) ).

x: corresponde al numero ingresado por el usuario
operation: resultado operacion final

-Salvedad: Para valores fuera de este rango, no garantizamos los
resultados.

*/
#include <stdio.h>
#include <math.h>

int main(){
    float x, operation;
    printf("Ingresa el valor que le asignará a x:");
    scanf("%f", &x);
    operation =( ( ( x/6 ) + ( 45.0/x ) ) / ( x - ( -8.0/2 ) ) / ( 12.0/sqrt(x) )  / 5.0 + pow(x,4) / sqrt(x) ) ;
     printf(" el resultado para un valor de %f es de %f", x, operation );
}