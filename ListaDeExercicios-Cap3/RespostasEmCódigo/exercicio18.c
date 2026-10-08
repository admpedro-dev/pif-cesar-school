#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    while (n > 0) {
        invertido = invertido * 10 + n % 10;
        n = n / 10;
    }

    printf("Numero invertido: %d\n", invertido);
    system("PAUSE");
    return 0;
}