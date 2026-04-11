#include <stdio.h>

int main() {
    int i, num;
    int maior, menor;

    for (i = 1; i <= 20; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &num);

        if (i == 1) {
            maior = num;
            menor = num;
        } else {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
