
#include <stdio.h>

int main() {
    int i, contador = 0;

    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            contador++;
        }
    }

    printf("quantidade de numeros divisiveis por 3 entre 1 e 100: %d\n", contador);

    return 0;
}
