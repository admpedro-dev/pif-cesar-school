#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    for (i = 1; i <= 100; i++) {
        printf("%d\t", 3 * i);
        if (i % 10 == 0) {
            printf("\n");
        }
    }

    system("PAUSE");
    return 0;
}