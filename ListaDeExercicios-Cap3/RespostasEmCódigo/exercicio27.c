#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor;
    int c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;

    printf("Digite o valor do saque (R$): ");
    scanf("%d", &valor);

    if (valor <= 0 || valor == 1 || valor == 3) {
        printf("Valor impossivel de sacar com essas cedulas.\n");
    } else {
        /* se o valor for impar, precisa de uma nota de 5 (a unica impar) */
        if (valor % 2 != 0) {
            c5 = 1;
            valor -= 5;
        }

        while (valor >= 100) {
            valor -= 100;
            c100++;
        }
        while (valor >= 50) {
            valor -= 50;
            c50++;
        }
        while (valor >= 20) {
            valor -= 20;
            c20++;
        }
        while (valor >= 10) {
            valor -= 10;
            c10++;
        }
        while (valor >= 2) {
            valor -= 2;
            c2++;
        }

        if (c100 > 0) printf("%d nota(s) de R$ 100\n", c100);
        if (c50 > 0) printf("%d nota(s) de R$ 50\n", c50);
        if (c20 > 0) printf("%d nota(s) de R$ 20\n", c20);
        if (c10 > 0) printf("%d nota(s) de R$ 10\n", c10);
        if (c5 > 0) printf("%d nota(s) de R$ 5\n", c5);
        if (c2 > 0) printf("%d nota(s) de R$ 2\n", c2);
    }

    system("PAUSE");
    return 0;
}