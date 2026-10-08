#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, cont = 1;

    printf("Digite N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", cont);
            cont++;
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}