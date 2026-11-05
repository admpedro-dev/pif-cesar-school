#include <stdio.h>
#include <stdlib.h>

int main() {
    float km, litros, consumo;

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &km);
    printf("Digite os litros consumidos: ");
    scanf("%f", &litros);

    if (litros <= 0) {
        printf("Erro: a quantidade de litros deve ser maior que zero!\n");
    } else {
        consumo = km / litros;
        printf("Consumo: %.2f km/l\n", consumo);

        if (consumo < 8.0) {
            printf("Venda o carro!\n");
        } else if (consumo <= 14.0) {
            printf("Economico!\n");
        } else {
            printf("Super economico!\n");
        }
    }

    system("PAUSE");
    return 0;
}