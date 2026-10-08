#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    float salario;

    do {
        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Salario atual: R$ ");
                scanf("%f", &salario);
                if (salario <= 2000.0) {
                    printf("Novo salario (+15%%): R$ %.2f\n", salario * 1.15);
                } else {
                    printf("Novo salario (+10%%): R$ %.2f\n", salario * 1.10);
                }
                break;
            case 2:
                printf("Salario: R$ ");
                scanf("%f", &salario);
                if (salario <= 3000.0) {
                    printf("Desconto (8%%): R$ %.2f | Liquido: R$ %.2f\n", salario * 0.08, salario * 0.92);
                } else {
                    printf("Desconto (15%%): R$ %.2f | Liquido: R$ %.2f\n", salario * 0.15, salario * 0.85);
                }
                break;
            case 3:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida! Escolha 1, 2 ou 3.\n");
        }
    } while (opcao != 3);

    system("PAUSE");
    return 0;
}