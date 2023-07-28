#include <stdio.h>

//suma, resta, multiplicacion, division. 
int main() {
    int num1, num2;
    int add, subm;
    int mult, div;

    printf("Por favor digite el primer numero:");
    scanf("%i", &num1);

    printf("Por favor digite el segundo numero:");
    scanf("%i", &num2);

    add = num1 + num2;
    subm = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("Suma: %i\n", add);
    printf("Resta: %i\n", subm);
    printf("Multiplicacion: %i\n", mult);
    printf("Division: %i\n", div);

    return 0;
}
