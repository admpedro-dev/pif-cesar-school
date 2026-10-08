#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    long long int a = 1, b = 1, atual = 1;

    printf("Digite o numero do termo (N): ");
    scanf("%d", &n);

    if (n < 1 || n > 90) {
        printf("Digite um N entre 1 e 90.\n");
    } else {
        for (i = 1; i <= n; i++) {
            if (i <= 2) {
                atual = 1;
            } else {
                atual = a + b;
                a = b;
                b = atual;
            }
            printf("Termo %d = %lld\n", i, atual);
        }
        printf("O termo %d da sequencia e %lld\n", n, atual);
    }

    system("PAUSE");
    return 0;
}