#include <stdio.h>

// convertir km/h a mph 

int main(){
    float kilometers, miles;
    printf ("por favor digite cuanto km/h desea convertir a mp/h: ");
    scanf ("%f", &kilometers);
    miles = kilometers * 0.621371;
    printf ("%f km/h equivalen a %f mp/h", kilometers, miles);
    return 0;
}