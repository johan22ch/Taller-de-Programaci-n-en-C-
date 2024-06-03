#include <stdio.h>

int main() {
    int num, sum = 0, i = 1;

    // Ingrese un número entero
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    // Se suman de todos los números anterioes hasta num usando un bucle do-while
    do {
        sum += i;
        i++;
    } while (i <= num);

    // Imprimir el resultado
    printf("La suma de los numeros desde 1 hasta %d es %d\n", num, sum);
    printf("Muchas gracias mundo :D\n");
    return 0;
}
