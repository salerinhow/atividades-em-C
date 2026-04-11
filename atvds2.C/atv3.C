#include <stdio.h>

int main() {
    int i = 1;
    float nota, soma = 0, media;

    do {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        soma += nota;
        i++;

    } while (i <= 50);

    media = soma / 50;

    printf("A media da turma é: %.2f\n", media);

    return 0;
}