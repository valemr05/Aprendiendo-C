#include <stdio.h>

//nombre, apellito y año de nacimiento.

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