#include <stdio.h>

int main() {
    int i = 1, contador = 0;

    while (i <= 50) {
        if (i % 2 == 0) {
            contador++;
        }
        i++;
    }

    printf("quantidade de numeros pares entre 1 e 50: %d\n", contador);

    return 0;
}
