/*
- Fecha de publicación: 13/08/2023
- Hora: 12:10 PM
- versión de su código: 1.0
- Autor. Ing(c) Valeria Muñoz Ramirez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- este programa recibe horas, minutos y segundos e imprime en pantalla el número
  de milisegundos.
*/

#include <stdio.h>

int main(){
    int hours, minutes, seconds, milliseconds;
    printf("Digite las horas:");
    scanf("%i", &hours);
    printf("Digite los minutos:");
    scanf("%i", &minutes);
    printf("Digite los segundos:");
    scanf("%i", &seconds);
    milliseconds = ( hours * 3600000 ) + ( minutes * 60000 ) + ( seconds * 1000 );
    printf("La cantidad de milisegundos para %i horas, %i minutos y %i segundos es de %i. ", hours, minutes, seconds, milliseconds);
}
