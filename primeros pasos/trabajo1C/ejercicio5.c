/*
-Fecha de publicación: 11/08/2023
-Hora: 11:40 PM
-versión de su código: 1.0
-Autor. Ing(c) Valeria Muñoz Ramirez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- este programa recibe una cantidad de horas y minutos e imprime el total en minutos.

- hours: Almacenará la cantidad de horas ingresadas por el usuario.
- minutes:  Almacenará la cantidad de minutos ingresados por el usuario.
- result: Almacenará el resultado final con el total el minutos. 


-Salvedad: Para valores fuera de este rango, no garantizamos los
resultados.
*/

#include <stdio.h>

int main (){
    int hours, minutes, result;
    printf("Por favor digita la cantidad de horas: ");
    scanf("%i", &hours);
    printf("Por favor digita la cantidad de minutos: ");
    scanf("%i", &minutes);
    result = ( hours * 60 ) + minutes;
    printf("%i horas y %i minutos equivalen a %i minutos en total.", hours, minutes, result);
}