#include <stdio.h>

int main() {
    int num, maior = 0;

    printf("Digite numeros inteiros positivos (0 para parar):\n");

    scanf("%d", &num);

    while (num != 0) {
        if (num > maior) {
            maior = num;
        }

        scanf("%d", &num);
    }

    if (maior > 0) {
        printf("O maior numero digitado foi: %d\n", maior);
    } else {
        printf("Nenhum numero positivo foi digitado.\n");
    }

    return 0;
}
