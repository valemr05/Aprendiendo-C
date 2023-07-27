#include <stdio.h>
int main() {
    int centigrados;
    int resultado;
    printf("Ingrese la cantidad de grados centigrados que desea convertir a farenheit:");
    scanf("%d", &centigrados);
    resultado = 1.8 * centigrados + 32.;
    printf("el resultado es:%d", resultado);
    return 0;
}