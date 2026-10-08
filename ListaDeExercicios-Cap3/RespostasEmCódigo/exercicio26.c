#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, n, d, divisores;
    long int soma = 0;

    do {
        printf("Digite A e B positivos (A < B): ");
        scanf("%d %d", &a, &b);
    } while (a <= 0 || b <= 0 || a >= b);

    printf("Primos entre %d e %d:\n", a, b);

    for (n = a; n <= b; n++) {
        divisores = 0;
        for (d = 1; d <= n; d++) {
            if (n % d == 0) {
                divisores++;
            }
        }
        if (divisores == 2) {
            printf("%d ", n);
            soma += n;
        }
    }

    printf("\nSoma dos primos: %ld\n", soma);
    system("PAUSE");
    return 0;
}