#include <stdio.h>

int main() {
    int base, exponente, resultado = 1, count = 1;

    // Ingrese la base y el exponente
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el número de veces que desea multiplicar la base: ");
    scanf("%d", &exponente);

    // Se procede a calcular la potencia utilizando sumas sucesivas con un bucle while
    while (count <= exponente) {
        resultado *= base;
        count++;
    }

    // Imprimir el resultado
    printf("%d^%d = %d\n", base, exponente, resultado);

    // Imprimir la expresión de la potencia
    printf("%d", base);
    count = 1;  // Reiniciar el contador para la expresión
    while (count < exponente) {
        printf(" * %d", base);
        count++;
    }
    printf(" = %d\n", resultado);
   printf("Muchas gracias mundo :D\n");
    return 0;
}
