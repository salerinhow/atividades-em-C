#include <stdio.h>

int main() {
    int i, idade, sexo, opiniao;

    int soma_idade_mulheres = 0, qtd_mulheres = 0;
    int qtd_homens = 0, qtd_homens_nao_gostaram = 0;
    int qtd_esperavam_mais = 0;

    float media_idade, percentual;

    for (i = 1; i <= 15; i++) {
        printf("\nPessoa %d\n", i);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Sexo (1-fem / 2-mas): ");
        scanf("%d", &sexo);

        printf("Opiniao (1-nao gostei / 2-esperava mais / 3-vale o ingresso / 4-excelente): ");
        scanf("%d", &opiniao);


        if (sexo == 1 && opiniao == 4) {
            soma_idade_mulheres += idade;
            qtd_mulheres++;
        }

        if (sexo == 2) {
            qtd_homens++;
            if (opiniao == 1) {
                qtd_homens_nao_gostaram++;
            }
        }

        if (opiniao == 2) {
            qtd_esperavam_mais++;
        }
    }

    // Resultados
    if (qtd_mulheres > 0) {
        media_idade = (float)soma_idade_mulheres / qtd_mulheres;
        printf("\nMedia da idade das mulheres que acharam excelente: %.2f\n", media_idade);
    } else {
        printf("\nNenhuma mulher achou o filme excelente.\n");
    }

    if (qtd_homens > 0) {
        percentual = (float)qtd_homens_nao_gostaram / qtd_homens * 100;
        printf("Percentual de homens que nao gostaram: %.2f%%\n", percentual);
    } else {
        printf("Nenhum homem participou da pesquisa.\n");
    }

    printf("Quantidade de pessoas que esperavam mais: %d\n", qtd_esperavam_mais);

    return 0;
}