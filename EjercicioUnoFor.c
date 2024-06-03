#include <stdio.h>
int main() {
    int num, sum = 0;

    // Ingrese un número entero
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    // Se suman de todos los números anteriores hasta num
    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    // Imprimir el resultado
    printf("La suma de los digitos desde 1 hasta %d es %d\n", num, sum);
    printf("Muchas gracias mundo :D\n");
    return 0;
}
