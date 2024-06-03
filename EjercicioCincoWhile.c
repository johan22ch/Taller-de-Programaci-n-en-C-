#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, count = 0;

    // Ingrese el número de elementos de la serie de Fibonacci
    printf("Ingrese el número de elementos de la serie de Fibonacci: ");
    scanf("%d", &n);

    // Asegurarque el número de elementos sea positivo
    if (n <= 0) {
        printf("Por favor, ingrese un número positivo.\n");
        return 1;
    }

    printf("Serie de Fibonacci: ");

    // Imprimir los primeros n elementos de la serie de Fibonacci usando un bucle while
    while (count < n) {
        if (count == 0) {
            printf("%d", first);
        } else if (count == 1) {
            printf(", %d", second);
        } else {
            next = first + second;
            first = second;
            second = next;
            printf(", %d", next);
        }
        count++;
    }

    printf("\n");
    printf("Muchas gracias mundo :D\n");

    return 0;
}
