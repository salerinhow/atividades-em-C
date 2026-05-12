#include <stdio.h>

int main() {
    int senha = 0;

    while (senha != 1234) {
        printf("digite a senha: ");
        scanf("%d", &senha);

        if (senha != 1234) {
            printf("senha incorreta. tente novamente.\n");
        }
    }

    printf("senha correta! acesso permitido.\n");

    return 0;
}
