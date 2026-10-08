#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, i;

    printf("Digite A e B: ");
    scanf("%d %d", &a, &b);

    if (a <= b) {
        for (i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } else {
        for (i = a; i >= b; i--) {
            printf("%d ", i);
        }
    }

    printf("\n");
    system("PAUSE");
    return 0;
}