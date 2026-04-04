#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("=== Calculadora de IMC ===\n\n");

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nIMC calculado: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Condicao: Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Condicao: Peso normal\n");
    } else if (imc < 30) {
        printf("Condicao: Acima do peso\n");
    } else {
        printf("Condicao: Obeso\n");
    }

    return 0;
}