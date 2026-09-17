#include <stdio.h>

#define PI 3.141593

int main() {
    float raio;
    
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    
    float area = PI * raio * raio;
    float circunferencia = 2 * PI * raio;
    
    printf("Área: %.2f\n", area);
    printf("Circunferência: %.2f\n", circunferencia);
    
    return 0;
}