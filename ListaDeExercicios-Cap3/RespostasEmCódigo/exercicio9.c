#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor, soma = 0;
    int qtd = 0;

    printf("Digite valores positivos (negativo para parar):\n");
    scanf("%f", &valor);

    while (valor >= 0) {
        soma += valor;
        qtd++;
        scanf("%f", &valor);
    }

    if (qtd > 0) {
        printf("Quantidade de valores: %d\n", qtd);
        printf("Soma: %.2f\n", soma);
        printf("Media: %.2f\n", soma / qtd);
    } else {
        printf("Nenhum valor valido foi digitado.\n");
    }

    system("PAUSE");
    return 0;
}