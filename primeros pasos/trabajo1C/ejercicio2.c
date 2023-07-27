#include <stdio.h>
#include <math.h>
#define pi 3.14159265

//volumen de una esfera
int main (){
    int radio;
    float volumen;
    printf ("Por favor digite el radio de la esfera:");
    scanf("%i", &radio);
    volumen = 1.3333 * pi * pow (radio,3);
    printf ("El volumen de una esfera de radio %i es de %f", radio, volumen);
    return 0;
}