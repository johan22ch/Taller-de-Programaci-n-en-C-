#include <stdio.h>

int main() {
    int base, exponente, multiplicador, resultado = 1;

    // Ingrese la base y el exponente
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el número de veces que desea multiplicar la base: ");
    scanf("%d", &exponente);

    // Calcular la potencia utilizando sumas sucesivas
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    // Imprimir el resultado
    printf("%d^%d = %d\n", base, exponente, resultado);

    // Imprimir la expresión de la potencia
    printf("%d", base);
    for (int i = 1; i < multiplicador; i++) {
        printf(" * %d", base);
    }
    printf(" = %d\n", resultado);
    printf("Muchas gracias mundo :D\n");
    return 0;
}
