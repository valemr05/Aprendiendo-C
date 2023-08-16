/*
- Fecha de publicación: 13/08/2023
- Hora: 12:20 PM
- versión de su código: 1.0
- Autor. Ing(c) Valeria Muñoz Ramirez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- este programa realiza la siguiente operación ( ( 17.0/11 ) + ( 23.0/2 ) ) / ( (943.0 / 120 ) + sqrt(144) ).


-Salvedad: Para valores fuera de este rango, no garantizamos los
resultados.
*/

#include <stdio.h>
#include <math.h>
int main(){
    float operation = ( ( 17.0/11 ) + ( 23.0/2 ) ) / ( (943.0 / 120 ) + sqrt(144) );
    printf("%f", operation);
}