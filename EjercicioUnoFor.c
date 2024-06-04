#include <stdio.h>

int sumaDigitos(int numero) {
    int suma = 0;
    for (; numero > 0; numero /= 10) {
        suma += numero % 10;
    }
    return suma;
}

int main() {
    int numero = 12567;
    int resultado = sumaDigitos(numero);
    printf("La suma de los dígitos de %d es: %d\n", numero, resultado);
    return 0;
}
