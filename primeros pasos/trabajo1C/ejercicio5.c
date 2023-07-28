#include <stdio.h>

//convertir horas y minutos a minutos}
int main (){
    int hours, minutes, result;
    printf("Por favor digita la cantidad de horas: ");
    scanf("%i", &hours);
    printf("Por favor digita la cantidad de minutos: ");
    scanf("%i", &minutes);
    result = ( hours * 60 ) + minutes;
    printf("%i horas y %i minutos equivalen a %i minutos en total.", hours, minutes, result);
}