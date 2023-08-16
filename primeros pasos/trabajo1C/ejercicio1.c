/*
-Fecha de publicación: 13/08/2023
-Hora: 11:00 AM
-versión de su código: 1.0
-Autor. Ing(c) Valeria Muñoz Ramirez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: 
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- este programa convierte grados centígrados a grados fahrenheit.

- centigrados: Almacena la cantidad de centigrados que el usuario va a ingresar.
- fahrenheit: Almacena el resultado final al convertir los centigrados a farenheit. 
*/

#include <stdio.h>
int main() {
    float centigrados;
    float fahrenheit;
    printf("Ingrese la cantidad de grados centigrados que desea convertir a farenheit:");
    scanf("%f", &centigrados);
    fahrenheit = 9.0/5 * centigrados + 32.;
    printf("%f grados centigrados equivalen a %f grados fahrenheit.", centigrados, fahrenheit);
    return 0;
}