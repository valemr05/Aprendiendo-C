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

  - hours: Almacenará la acantidad de horas ingresadas por el usuario. 
  - minutes: Almacenará la acantidad de minutos ingresados por el usuario. 
  - seconds: Almacenará la acantidad de segundos ingresados por el usuario. 
  - milliseconds: Almacenará la cantidad del tiempo final en milisegundos. 

-Salvedad: Para valores fuera de este rango, no garantizamos los
resultados.
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
