#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    long long int fat = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: nao existe fatorial de numero negativo.\n");
    } else if (n > 20) {
        printf("Erro: numero muito grande, o long long so aguenta ate 20!\n");
    } else {
        for (i = 2; i <= n; i++) {
            fat *= i;
        }
        printf("%d! = %lld\n", n, fat);
    }

    system("PAUSE");
    return 0;
}