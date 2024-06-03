#include <stdio.h>

int main() {
    int num, inverse = 0, i;

    // Ingrese un número entero
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    // Se prodece a calcular el inverso del número ingresado usando un bucle while
    i = num;
    while (i >= 1) {
        inverse = inverse * 10 + i;
        i--;
    }

    // Imprimir el resultado
    printf("El inverso de %d es %d\n", num, inverse);
    printf("Muchas gracias mundo :D\n");
    return 0;
}

