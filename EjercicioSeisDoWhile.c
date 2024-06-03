#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    // Ingrese un número entero
    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &n);

    // Asegurar que el número sea no negativo
    if (n < 0) {
        printf("El factorial no está definido para números negativos.\n");
        return 1;
    }

    int i = 1;
    
    // Calcular el factorial usando un bucle do-while
    do {
        factorial *= i;
        i++;
    } while (i <= n);

    // Imprimir el resultado
    printf("%d! = %llu\n", n, factorial);
    printf("Muchas gracias mundo :D\n");

    return 0;
}
