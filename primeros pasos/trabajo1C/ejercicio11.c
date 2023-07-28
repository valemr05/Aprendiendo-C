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
