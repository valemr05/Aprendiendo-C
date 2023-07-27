#include <stdio.h>

 //perimetro de un rectangulo 
 int main(){
    int width, height, perimeter;
    printf ("Por favor digite el ancho del rectangulo: ");
    scanf("%i", &width);
    printf ("Por favor digite el largo del rectangulo: ");
    scanf("%i", &height);
    perimeter = (width * 2) + (height*2);
    printf("El perimetro de un rectangulo con ancho %i y largo %i es de: %i", width, height, perimeter);
    return 0;

 }

