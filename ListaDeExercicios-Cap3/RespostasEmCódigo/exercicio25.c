#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    printf("Quantidade de divisores de %d: %d\n", n, divisores);

    if (n > 1 && divisores == 2) {
        printf("%d e um numero primo.\n", n);
    } else {
        printf("%d nao e um numero primo.\n", n);
    }

    system("PAUSE");
    return 0;
}