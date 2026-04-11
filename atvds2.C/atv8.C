#include <stdio.h>

int main() {
    int num1, num2;
    int resultado = 0;
    int i;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    for (i = 0; i < num2; i++) {
        resultado += num1;
    }

    printf("Resultado da multiplicacao: %d\n", resultado);

    return 0;
}