#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    printf("Com for:\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }

    printf("\n\nCom while:\n");
    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }

    printf("\n\nCom do-while:\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);

    printf("\n");
    system("PAUSE");
    return 0;
}