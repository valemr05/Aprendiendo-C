#include <stdio.h>
#include <math.h>

int main(){
    float x, operation;
    printf("Ingresa el valor que le asignará a x:");
    scanf("%f", &x);
    operation =( ( x * 1/2 ) + 25 ) / ( ( sqrt(169) / sqrt(144) ) + (sqrt(x)/x ) );
    printf("%f", operation ) ;
}