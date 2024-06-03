#include <stdio.h>

int main() {
    int num, sum = 0, i = 1;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    // Calcular la suma de todos los números desde 1 hasta num usando un bucle while
    while (i <= num) {
        sum += i;
        i++;
    }

    // Imprimir el resultado
    printf("La suma de los numeros desde 1 hasta %d es %d\n", num, sum);
    printf("Muchas gracias mundo :D\n");
    return 0;
}
