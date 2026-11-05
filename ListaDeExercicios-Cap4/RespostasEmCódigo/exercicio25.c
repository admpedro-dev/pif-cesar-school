#include <stdio.h>
#include <stdlib.h>

int main() {
    int total, entregue, troco;
    int c100, c50, c20, c10, c5 = 0, c2;

    printf("Digite o valor total a pagar: ");
    scanf("%d", &total);
    printf("Digite o valor entregue pelo cliente: ");
    scanf("%d", &entregue);

    if (entregue < total) {
        printf("Erro: valor entregue insuficiente!\n");
    } else {
        troco = entregue - total;
        printf("Troco: R$ %d\n", troco);

        if (troco == 0) {
            printf("Nao ha troco.\n");
        } else if (troco == 1 || troco == 3) {
            printf("Nao e possivel dar esse troco com as cedulas disponiveis.\n");
        } else {
            /* se o troco for impar, precisa de uma nota de 5 (a unica impar) */
            if (troco % 2 != 0) {
                c5 = 1;
                troco = troco - 5;
            }

            c100 = troco / 100;
            troco = troco % 100;
            c50 = troco / 50;
            troco = troco % 50;
            c20 = troco / 20;
            troco = troco % 20;
            c10 = troco / 10;
            troco = troco % 10;
            c2 = troco / 2;

            if (c100 > 0) printf("%d nota(s) de R$ 100\n", c100);
            if (c50 > 0) printf("%d nota(s) de R$ 50\n", c50);
            if (c20 > 0) printf("%d nota(s) de R$ 20\n", c20);
            if (c10 > 0) printf("%d nota(s) de R$ 10\n", c10);
            if (c5 > 0) printf("%d nota(s) de R$ 5\n", c5);
            if (c2 > 0) printf("%d nota(s) de R$ 2\n", c2);
        }
    }

    system("PAUSE");
    return 0;
}