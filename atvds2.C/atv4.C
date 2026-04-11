#include <stdio.h>

int main() {
    int i;
    float nota, soma = 0, media;

    for (i = 1; i <= 50; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        soma += nota;
    }

    media = soma / 50;

    printf("A media da turma é: %.2f\n", media);

    return 0;
}