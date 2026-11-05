#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    float temp;

    printf("===== CONVERSOR DE TEMPERATURA =====\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <= 4) {
        printf("Digite a temperatura: ");
        scanf("%f", &temp);
    }

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f F\n", temp * 1.8 + 32);
            break;
        case 2:
            printf("Resultado: %.2f K\n", temp + 273.15);
            break;
        case 3:
            printf("Resultado: %.2f C\n", (temp - 32) / 1.8);
            break;
        case 4:
            printf("Resultado: %.2f C\n", temp - 273.15);
            break;
        default:
            printf("Opcao invalida!\n");
    }

    system("PAUSE");
    return 0;
}