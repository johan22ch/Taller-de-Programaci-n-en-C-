#include <stdio.h>

int main() {
    int numero;
    int contador = 0;

    // Ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Asegurar si el número es negativo y convertirlo a positivo
    if (numero < 0) {
        numero = -numero;
    }

    // Contar el número de dígitos utilizando un bucle while
    while (numero != 0) {
        numero /= 10;
        contador++;
    }

    // Imprimir el resultado
    printf("El número tiene %d dígito(s).\n", contador);
    printf("Muchas gracias mundo :D\n");

    return 0;
}
