#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, palpite, tentativas = 0;
    srand(time(0));
    numero = rand() % 100 + 1;

    printf("Tente adivinhar o número de 1 a 100!\n");

    do {
        printf("Seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numero) printf("Muito baixo!\n");
        else if (palpite > numero) printf("Muito alto!\n");
        else printf("Acertou! Tentativas: %d\n", tentativas);
    } while (palpite != numero);

    return 0;
}