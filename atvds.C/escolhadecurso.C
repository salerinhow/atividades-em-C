#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero de 0 a 8: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Voce pertence ao EIXO TECNOLOGICO\n");
    } else if (num == 1) {
        printf("Voce pertence ao curso de ADS\n");
    } else if (num == 2) {
        printf("Voce pertence ao curso de JOGOS DIGITAIS\n");
    } else if (num == 3) {
        printf("Voce pertence ao curso de Moda\n");
    } else if (num == 4) {
        printf("Voce pertence ao curso de Gastronomia\n");
    } else if (num == 5) {
        printf("Voce pertence ao curso de Gestao\n");
    } else if (num == 6) {
        printf("Voce pertence ao curso de Enfermagem\n");
    } else if (num == 7) {
        printf("Voce pertence ao curso de Estetica\n");
    } else if (num == 8) {
        printf("Voce pertence a Pos Graduacao\n");
    } else {
        printf("Voce NAO pertence a curso algum da FACULDADE SENAC\n");
    }

    return 0;
}