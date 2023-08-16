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
- este programa recibe una cantidad minutos e imprime el total en horas y minutos. 

- minutes: Minutos ingresados por el usuario.
- resulthours: cantidad de horas en total que hay en esos minutos ingresados
- resultmin: cantidad de minutos que quedan luego de sacar las horas. 
-Salvedad: Para valores fuera de este rango, no garantizamos los
resultados.
*/

#include <stdio.h>
 
 int main(){
    int minutes, resulthours, resultmin;
    printf("Por favor digite la cantidad de minutos: ");
    scanf("%i", &minutes);
    resulthours =  minutes / 60;
    resultmin = minutes % 60; 
    printf ("%i minutos equivalen a %i horas y %i minutos.", minutes, resulthours, resultmin);
 }