#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i, achou = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            achou = 1;
        }
    }

    if (achou == 0) {
        printf("Nenhum numero atende a condicao.");
    }

    printf("\n");
    system("PAUSE");
    return 0;
}