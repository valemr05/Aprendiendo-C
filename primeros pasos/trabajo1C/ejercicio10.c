#include <stdio.h>
//mph a m/s.
int main(){
    int miles;
    float meters;
    printf("Por favor digite la cantidad de mph que desea convertir a m/s:");
    scanf("%i", &miles);
    meters= (  miles * 1609.344 ) / 3600;
    printf("%i mph equivalen a %f m/s.", miles, meters );
}