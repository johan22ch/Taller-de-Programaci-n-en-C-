#include <stdio.h>

int main() {
    int numero;
    int esPrimo = 1; // Suponemos que el número es primo al principio
    int divisor = 2; // Comenzamos verificando divisibilidad desde 2

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Verificar si el número es menor o igual a 1
    if (numero <= 1) {
        printf("%d no es primo.\n", numero);
        return 0;
    }

    // Verificar si el número es primo utilizando un bucle do-while
    do {
        if (numero % divisor == 0) {
            esPrimo = 0; // Si encuentra un divisor, el número no es primo
            break;
        }
        divisor++;
    } while (divisor <= numero / 2);

    // Imprimir el resultado
    if (esPrimo) {
        printf("%d es primo.\n", numero);
    } else {
        printf("%d no es primo.\n", numero);
    }
        printf("Muchas gracias mundo :D\n");
    return 0;
}
