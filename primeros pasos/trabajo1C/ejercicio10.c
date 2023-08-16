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
- este programa convierte mph (millas por hora) a m/s.

-miles: almacena la cantidad de millas ingresadas por el usuario. 
-meters: almacenan el resultado final de convertir las millas a m/s.

-Salvedad: Para valores fuera de este rango, no garantizamos los
resultados.
*/

#include <stdio.h>

int main(){
    int miles;
    float meters;
    printf("Por favor digite la cantidad de mph que desea convertir a m/s:");
    scanf("%i", &miles);
    meters= (  miles * 1609.344 ) / 3600;
    printf("%i mph equivalen a %f m/s.", miles, meters );
}