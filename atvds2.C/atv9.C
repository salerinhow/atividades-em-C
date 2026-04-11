#include <stdio.h>

int main() {
    int num;
    int soma = 0, qtd = 0;
    float media;

    while (1) { 
        printf("Digite um numero (0 para parar): ");
        scanf("%d", &num);

        if (num == 0) {
            break; 
        }

        if (num > 0 && num % 2 == 0) {
            soma += num;
            qtd++;
        }
    }

    if (qtd > 0) {
        media = (float)soma / qtd;
        printf("Media dos numeros pares: %.2f\n", media);
    } else {
        printf("Nenhum numero par foi digitado.\n");
    }

    return 0;
}