#include <stdio.h>

int main() {
    int canal, pessoas;
    int sbt = 0, record = 0, globo = 0, redetv = 0;
    int total = 0;

    printf("Digite o canal (1-SBT / 2-Record / 3-Globo / 4-RedeTV / 0-encerrar): ");
    scanf("%d", &canal);

    while (canal != 0) {
        printf("Numero de pessoas assistindo: ");
        scanf("%d", &pessoas);

        if (canal == 1) sbt += pessoas;
        else if (canal == 2) record += pessoas;
        else if (canal == 3) globo += pessoas;
        else if (canal == 4) redetv += pessoas;

        total += pessoas;

        printf("\nDigite o canal (1-SBT / 2-Record / 3-Globo / 4-RedeTV / 0-encerrar): ");
        scanf("%d", &canal);
    }
    
    if (total > 0) {
        printf("\nPercentual SBT: %.2f%%\n", (float)sbt / total * 100);
        printf("Percentual Record: %.2f%%\n", (float)record / total * 100);
        printf("Percentual Globo: %.2f%%\n", (float)globo / total * 100);
        printf("Percentual RedeTV: %.2f%%\n", (float)redetv / total * 100);
    } else {
        printf("\nNenhum dado foi informado.\n");
    }

    // maior audiência
    int maior = sbt;
    int menor = sbt;
    int canal_maior = 1;
    int canal_menor = 1;

    if (record > maior) {
        maior = record;
        canal_maior = 2;
    }
    if (globo > maior) {
        maior = globo;
        canal_maior = 3;
    }
    if (redetv > maior) {
        maior = redetv;
        canal_maior = 4;
    }

    // menor audiência
    if (record < menor) {
        menor = record;
        canal_menor = 2;
    }
    if (globo < menor) {
        menor = globo;
        canal_menor = 3;
    }
    if (redetv < menor) {
        menor = redetv;
        canal_menor = 4;
    }

    printf("\nCanal com maior audiencia: %d\n", canal_maior);
    printf("Canal com menor audiencia: %d\n", canal_menor);

    return 0;
}