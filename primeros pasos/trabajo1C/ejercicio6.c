#include <stdio.h>
//minutos a horas y minutos. 
 
 int main(){
    int minutes, resulthours, resultmin;
    printf("Por favor digite la cantidad de minutos: ");
    scanf("%i", &minutes);
    resulthours =  minutes / 60;
    resultmin = minutes % 60; 
    printf ("%i minutos equivalen a %i horas y %i minutos.", minutes, resulthours, resultmin);
 }