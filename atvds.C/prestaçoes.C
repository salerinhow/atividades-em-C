#include <stdio.h>

int main()
{
    int total_prestacoes, pagas, restantes;
    float valor_prestacao, saldo_devedor;

    printf("Digite o total de prestacoes: ");
    scanf("%d", &total_prestacoes);

    printf("Digite o numero de prestacoes pagas: ");
    scanf("%d", &pagas);

    printf("Digite o valor da prestacao: ");
    scanf("%f", &valor_prestacao);

    restantes = total_prestacoes - pagas;
    saldo_devedor = restantes * valor_prestacao;

    printf("Prestacoes restantes: %d\n", restantes);
    printf("Saldo devedor: %.2f\n", saldo_devedor);

    return 0;
}
