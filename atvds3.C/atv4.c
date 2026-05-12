#include <stdio.h>

int main() {
    int num;
    int soma = 0;

    printf("digite um numero (0 para encerrar): ");
    scanf("%d", &num);

    while (num != 0) {
        soma += num;

        printf("digite um numero (0 para encerrar): ");
        scanf("%d", &num);
    }

    printf("a soma dos valores digitados é: %d\n", soma);

    return 0;
}
