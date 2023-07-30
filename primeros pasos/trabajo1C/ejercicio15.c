#include <stdio.h>
#include <math.h>

int main(){
    float x, operation;
    printf("Ingresa el valor que le asignará a x:");
    scanf("%f", &x);
    operation =( (x/6) + (45/x) ) / ( x - (-8/2)) / (12/ sqrt(x))  / (5/sqrt(x)) + pow(x,4) ;
    printf("%f", operation ) ;
}