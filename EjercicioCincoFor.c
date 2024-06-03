#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Ingrese el número de elementos de la serie de Fibonacci
    printf("Ingrese el número de elementos de la serie de Fibonacci: ");
    scanf("%d", &n);

    // Aswegurarse que el número de elementos sea positivo
    if (n <= 0) {
        printf("Por favor, ingrese un número positivo.\n");
        return 1;
    }

    printf("Serie de Fibonacci: ");

    // Imprimir los primeros n elementos de la serie de Fibonacci usando un bucle for
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", first);
        } else if (i == 1) {
            printf(", %d", second);
        } else {
            next = first + second;
            first = second;
            second = next;
            printf(", %d", next);
        }
    }

    printf("\n");
    printf("Muchas gracias mundo :D\n");

    return 0;
}
