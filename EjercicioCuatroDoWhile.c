#include <stdio.h>

int main() {
    int num, guess = 0, cubed;

    // Ingrese un número entero
    printf("Ingrese un número: ");
    scanf("%d", &num);

    // Se procede a calcular la raíz cúbica utilizando restas sucesivas con un bucle do-while
    do {
        cubed = guess * guess * guess;
        if (cubed == num) {
            break;
        } else if (cubed > num) {
            guess--;
            break;
        }
        guess++;
    } while (1);

    // Imprimir el resultado
    printf("La raíz cúbica aproximada de %d es %d\n", num, guess);
    printf("Muchas gracias mundo :D\n");

    return 0;
}
