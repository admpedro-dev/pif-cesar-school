#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    const double PI = 3.14159265;

    double raio;
    double area;
    double volume;

    printf("Digite o raio da circunferencia: ");
    scanf("%lf", &raio);

    area = 4.0 * PI * pow(raio,2);
    volume = (4.0 / 3.0) * PI * pow(raio,3);

    printf("O raio da cicunferencia é de: %.3lf\n", raio);
    printf("A area da circunferencia é de: %.3lf\n", area);
    printf("O volume da circunferencia é de: %.3lf\n", volume);

    system("PAUSE");

    return 0;
}