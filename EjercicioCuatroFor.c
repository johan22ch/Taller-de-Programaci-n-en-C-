#include <stdio.h>

int main() {
    double num, approx;
    int i;

    // Ingrese un número entero
    printf("Ingrese un número: ");
    scanf("%lf", &num);

    // Inicializar la aproximación 
    approx = num / 3.0;

    // Realizar iteraciones para mejorar la aproximación de la raíz cúbica
    for (i = 0; i < 100; i++) {
        approx = (2.0 * approx + num / (approx * approx)) / 3.0;
    }

    // Imprimir el resultado
    printf("La raíz cúbica aproximada de %.2f es %.5f\n", num, approx);
    printf("Muchas gracias mundo :D\n");
    return 0;
}
