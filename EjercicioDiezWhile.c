#include <stdio.h>

int main() {
    int numero;
    int esPrimo = 1; // Si el número es primo al principio
    int divisor = 2; // Comenzamos verificando divisibilidad desde 2

    // Ingrese un número entero
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Asegurar si el número es menor o igual a 1
    if (numero <= 1) {
        printf("%d no es primo.\n", numero);
        return 0;
    }

    // Asegurar si el número es primo utilizando un bucle while
    while (divisor <= numero / 2) {
        if (numero % divisor == 0) {
            esPrimo = 0; // Si encuentra un divisor, el número no es primo
            break;
        }
        divisor++;
    }

    // Imprimir el resultado
    if (esPrimo) {
        printf("%d es primo.\n", numero);
    } else {
        printf("%d no es primo.\n", numero);
    }
        printf("Muchas gracias mundo :D\n");
    return 0;
}
