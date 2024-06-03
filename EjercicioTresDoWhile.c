#include <stdio.h>

int main() {
    int base, exponente, resultado = 1, count = 1;

    // Ingrese la base y el exponente
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el número de veces que desea multiplicar la base: ");
    scanf("%d", &exponente);

    // Calcular la potencia utilizando sumas sucesivas con un bucle do-while
    do {
        resultado *= base;
        count++;
    } while (count <= exponente);

    // Imprimir el resultado
    printf("%d^%d = %d\n", base, exponente, resultado);

    // Imprimir la expresión de la potencia
    printf("%d", base);
    count = 1;  // Reiniciar el contador para la expresión
    do {
        if (count < exponente) {
            printf(" * %d", base);
        }
        count++;
    } while (count <= exponente);
    printf(" = %d\n", resultado);
    printf("Muchas gracias mundo :D\n");
    return 0;
}
