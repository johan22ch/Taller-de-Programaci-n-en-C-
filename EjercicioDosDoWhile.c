#include <stdio.h>

int main()
{
    int num, inverse = 0, i;

    // Ingrese un número entero
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    // Se procede a calcular el inverso del número ingresado usando un bucle do-while
    i = num;
    do
    {
        inverse = inverse * 10 + i;
        i--;
    } while (i >= 1);

    // Imprimir el resultado
    printf("El inverso de %d es %d\n", num, inverse);
    printf("Muchas gracias mundo :D\n");
    return 0;
}
