#include <stdio.h>

int main() {
    int num;
    int soma = 0, quantidade = 0;

    printf("digite um numero (-1 para encerrar): ");
    scanf("%d", &num);

    while (num != -1) {
        soma += num;
        quantidade++;

        printf("digite um numero (-1 para encerrar): ");
        scanf("%d", &num);
    }

    if (quantidade > 0) {
        float media = (float)soma / quantidade;
        printf("media dos valores digitados: %.2f\n", media);
    } else {
        printf("nenhum numero valido foi digitado.\n");
    }

    return 0;
}
