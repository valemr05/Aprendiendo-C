/*
- Fecha de publicación: 11/08/2023
- Hora: 11:50 PM
- versión de su código: 1.0
- Autor. Ing(c) Valeria Muñoz Ramirez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- este programa recibe como datos de entrada el nombre, apellido y año de nacimiento y luego los imprima juntos.

- name: Almacenará el nombre ingresado por el usuario.
- surname: Almacenará el apellido ingresado por el usuario.
- year: Almacenará el año ingresado por el usuario.

-Salvedad: Para valores fuera de este rango, no garantizamos los
resultados.
*/

#include <stdio.h>

int main() {
    char name[20];
    char surname[20];
    int year;
    printf("Por favor digite su nombre (20 letras maximo): ");
    scanf("%s", name);
    printf("Por favor digite su apellido (20 letras maximo): ");
    scanf("%s", surname);
    printf("Por favor digite su año de nacimiento: ");
    scanf("%i", &year);
    printf("%s %s %i", name, surname, year);

}