#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Opcao A\n");
        printf("2 - Opcao B\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("voce escolheu a opcao A.\n");
                break;
            case 2:
                printf("voce escolheu a opcao B.\n");
                break;
            case 0:
                printf("saindo do programa...\n");
                break;
            default:
                printf("opcao invalida. tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}

