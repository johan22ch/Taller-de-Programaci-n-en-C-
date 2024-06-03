#include <stdio.h>

int main() {
    int n;
    double producto = 1.0;
    int i = 1;

    // Ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    // Aseguarra si n es positivo
    if (n <= 0) {
        printf("El número debe ser un entero positivo.\n");
        return 1;
    }

    // Calcular el producto de la serie utilizando un bucle while
    while (i <= n) {
        producto *= 1.0 / i;
        i++;
    }

    // Imprimir el resultado
    printf("El producto de la serie 1 * 1/2 * 1/3 * ... * 1/%d es: %f\n", n, producto);
    printf("Muchas gracias mundo :D\n");

    return 0;
}
