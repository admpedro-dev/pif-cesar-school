#include <stdio.h>
#include <stdlib.h>

int main() {
    int c;
    float f, k;

    printf("Celsius\tFahrenheit\tKelvin\n");
    for (c = 0; c <= 100; c += 5) {
        f = (9.0 * c) / 5 + 32;
        k = c + 273.15;
        printf("%7d\t%10.2f\t%6.2f\n", c, f, k);
    }

    system("PAUSE");
    return 0;
}