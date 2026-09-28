#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double ladoA, ladoB, ladoC;
    double semiPerimetro;
    double areaTriangulo;

    printf("Escreva os 3 lados de um triangulo qualquer (separados por espaço): ");
    scanf("%lf %lf %lf", &ladoA, &ladoB, &ladoC);

    semiPerimetro = (ladoA + ladoB + ladoC) / 2.0;
    areaTriangulo = sqrt(semiPerimetro * (semiPerimetro - ladoA) * (semiPerimetro - ladoB) * (semiPerimetro - ladoC));

    printf("A área do triangulo é de: %.2lf\n", areaTriangulo);


    system("PAUSE");
    return 0;
}