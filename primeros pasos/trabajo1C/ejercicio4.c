/*
-Fecha de publicación: 11/08/2023
-Hora: 11:30 PM
-versión de su código: 1.0
-Autor. Ing(c) Valeria Muñoz Ramirez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- este programa convierte Km/h a mph (millas por hora). 

- kilometers: almacenará al cantidad de kilometros ingresada por el usuario. 
- miles: almacerá el resultado de la operacion para hallar las millas. 

-Salvedad: Para valores fuera de este rango, no garantizamos los
resultados.
*/

#include <stdio.h>

int main(){
    float kilometers, miles;
    printf ("por favor digite cuantos km/h desea convertir a mp/h: ");
    scanf ("%f", &kilometers);
    miles = kilometers * 0.621371;
    printf ("%f km/h equivalen a %f mp/h", kilometers, miles);
    return 0;
}