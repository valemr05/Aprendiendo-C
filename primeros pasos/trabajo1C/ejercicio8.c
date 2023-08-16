/*
- Fecha de publicación: 11/08/2023
- Hora: 12:00 PM
- versión de su código: 1.0
- Autor. Ing(c) Valeria Muñoz Ramirez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- este programa recibe como datos de entrada  2 números y realice las operaciones de suma, resta,
  multiplicación y división e imprime los resultados de forma ordenada en pantalla.

- num1: primer numero ingresado por el usuario. 
- num2: segundo numero ingresado por el usuario. 
- add: suma
- subm: resta
- mult: multiplicacion 
- div: division 
  
-Salvedad: Para valores fuera de este rango, no garantizamos los
resultados.
*/

#include <stdio.h>
 
int main() {
    float num1, num2, add, subm, mult, div;
    printf("Por favor digite el primer numero:");
    scanf("%f", &num1);
    printf("Por favor digite el segundo numero:");
    scanf("%f", &num2);

    add = num1 + num2;
    subm = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("Suma: %f\n", add);
    printf("Resta: %f\n", subm);
    printf("Multiplicacion: %f\n", mult);
    printf("Division: %f\n", div);
    return 0;
}
