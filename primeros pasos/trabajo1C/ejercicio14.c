#include <stdio.h>
#include <math.h>

int main(){
    float x, operation;
    printf("Ingresa el valor que le asignará a x:");
    scanf("%f", &x);
    operation = ( ( ( x / 2 ) + ( sqrt(x) / x ) + 20 ) * (16/x) )  /( ( ( (1/2) - (3/4) + x ) / (2/17) ) + x )+ pow(x,2);
    printf("%f", operation );
}