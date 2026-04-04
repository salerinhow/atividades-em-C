#include <stdio.h>
int main() {
    float valor, desconto, valorFinal, valorDesconto;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite o percentual de desconto: ");
    scanf("%f", &desconto);

    valorDesconto = valor * (desconto / 100);
    valorFinal = valor - valorDesconto;

    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}