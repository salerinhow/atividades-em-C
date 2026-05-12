#include <stdio.h>

int main() {
    int num;

    printf("digite um numero positivo: ");
    scanf("%d", &num);

    while (num < 0) {
        printf("numero negativo. digite um numero positivo: ");
        scanf("%d", &num);
    }

    printf("numero valido digitado: %d\n", num);

    return 0;
}
