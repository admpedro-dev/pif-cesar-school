#include <stdio.h>

#define CONVERSAO 3.6

int main() {
    float velocidadeKmh;
    
    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &velocidadeKmh);
    
    float velocidadeMs = velocidadeKmh / CONVERSAO;
    
    printf("%.2f km/h = %.2f m/s\n", velocidadeKmh, velocidadeMs);
    
    return 0;
}