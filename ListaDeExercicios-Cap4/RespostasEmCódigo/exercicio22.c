#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor, imposto = 0;
    int estado, valido = 1;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Estado de destino (1 = MG, 2 = SP, 3 = RJ, 4 = MS): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            imposto = valor * 0.07;
            break;
        case 2:
            imposto = valor * 0.12;
            break;
        case 3:
            imposto = valor * 0.15;
            break;
        case 4:
            imposto = valor * 0.08;
            break;
        default:
            valido = 0;
            printf("Erro: codigo de estado invalido!\n");
    }

    if (valido == 1) {
        printf("Imposto: R$ %.2f\n", imposto);
        printf("Preco final: R$ %.2f\n", valor + imposto);
    }

    system("PAUSE");
    return 0;
}