#include <stdio.h>
#include <stdlib.h>

int main() {
    int horas;
    float valor;

    printf("Digite o numero de horas de permanencia: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Erro: numero de horas invalido!\n");
    } else {
        if (horas <= 2) {
            valor = horas * 2.00;
        } else if (horas <= 4) {
            valor = 2 * 2.00 + (horas - 2) * 2.50;
        } else {
            valor = 2 * 2.00 + 2 * 2.50 + (horas - 4) * 3.00;
        }

        printf("Tempo total: %d hora(s)\n", horas);
        printf("Valor cobrado: R$ %.2f\n", valor);
    }

    system("PAUSE");
    return 0;
}