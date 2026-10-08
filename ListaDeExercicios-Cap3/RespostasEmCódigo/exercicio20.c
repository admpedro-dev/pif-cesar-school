#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    printf("DEC\tHEX\tCHAR\n");
    for (i = 32; i <= 126; i++) {
        printf("%d\t%X\t%c\n", i, i, i);
    }

    system("PAUSE");
    return 0;
}