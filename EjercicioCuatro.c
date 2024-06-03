#include <stdio.h>
int main() {
    int num, inverse = 0;

    // Ingrese un número entero
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    // Se procede a calcular el inverso del número entero ingresado usando un bucle for
    for (int i = num; i >= 1; i--) {
        inverse = inverse * 10 + i;
    }

    // Imprimir el resultado
    printf("El inverso de %d es %d\n", num, inverse);
    printf("Muchas gracias mundo :D\n");
    return 0;
}
