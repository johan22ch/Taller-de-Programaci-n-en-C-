#include <stdio.h>

// Calcular el n-ésimo número triangular
int calcularNumeroTriangular(int n) {
    int numeroTriangular = 0;
    int contador = 1;
    while (contador <= n) {
        numeroTriangular += contador;
        contador++;
    }
    return numeroTriangular;
}

int main() {
    int n;

    // Ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    // Verificar si n es positivo
    if (n <= 0) {
        printf("El número debe ser un entero positivo.\n");
        return 1;
    }

    // Calcular el n-ésimo número triangular
    int numeroTriangular = calcularNumeroTriangular(n);

    // Imprimir el resultado
    printf("El número triangular de %d es: %d\n", n, numeroTriangular);
    printf("Muchas gracias mundo :D\n");

    return 0;
}
