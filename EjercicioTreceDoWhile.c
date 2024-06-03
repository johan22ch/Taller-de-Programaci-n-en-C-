#include <stdio.h>

int main() {
    int n;
    int suma = 0;
    int i = 2; // Inicializar el contador en 2

    // Ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    // Asegurarse si n es positivo
    if (n <= 0) {
        printf("El número debe ser un entero positivo.\n");
        return 1;
    }

    // Calcular la suma de los números pares utilizando un bucle do-while
    do {
        suma += i;
        i += 2; // Incrementar el contador en 2 para pasar al siguiente número par
    } while (i <= n);

    // Imprimir el resultado
    printf("La suma de todos los números pares desde 1 hasta %d es: %d\n", n, suma);
    printf("Muchas gracias mundo :D\n");


    return 0;
}
