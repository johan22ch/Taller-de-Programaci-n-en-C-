#include <stdio.h>

// Calcular el factorial de un número
int factorial(int num) {
    int fact = 1;
    int i = 1;
    do {
        fact *= i;
        i++;
    } while (i <= num);
    return fact;
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

    // Calcular la suma de los factoriales de los primeros n números
    int sumaFactoriales = 0;
    int i = 1;
    do {
        sumaFactoriales += factorial(i);
        i++;
    } while (i <= n);

    // Imprimir el resultado
    printf("La suma de los factoriales de los primeros %d números es: %d\n", n, sumaFactoriales);
    printf("Muchas gracias mundo :D\n");

    return 0;
}
