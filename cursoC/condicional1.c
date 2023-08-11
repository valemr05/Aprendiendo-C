//numero par o no 
#include <stdio.h>
int main(){
    int num, operacion;
    printf("Ingrese por favor un numero:");
    scanf("%i", &num);
    operacion  = num % 2;
    if (operacion == 0)
      printf("El numero es par");
    else
    printf("El numero no es par");
}