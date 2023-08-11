/*
-Fecha de publicación: 11/08/2023
-Hora: 11:00 PM
-versión de su código: 1.0
-Autor. Ing(c) Valeria Muñoz Ramirez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- este programa convierte grados centígrados a grados fahrenheit.
*/

#include <stdio.h>
int main() {
    float centigrados;
    float resultado;
    printf("Ingrese la cantidad de grados centigrados que desea convertir a farenheit:");
    scanf("%f", &centigrados);
    resultado = 9.0/5 * centigrados + 32.;
    printf("el resultado es:%f", resultado);
    return 0;
}