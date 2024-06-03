#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1;
    int term = 2; // Primer término de la serie
    int i = 0;

    // Igrese el número de términos
    printf("Ingrese el número de términos para calcular el producto: ");
    scanf("%d", &n);

    // Asegurar que el número de términos sea positivo
    if (n <= 0) {
        printf("Por favor, ingrese un número positivo.\n");
        return 1;
    }

    // Calcular el producto de los primeros n términos usando un bucle while
    while (i < n) {
        product *= term;
        term *= 2; // Cada término es el doble del anterior
        i++;
    }

    // Imprimir el resultado
    printf("El producto de los primeros %d términos es %llu\n", n, product);
    printf("Muchas gracias mundo :D\n");

    return 0;
}