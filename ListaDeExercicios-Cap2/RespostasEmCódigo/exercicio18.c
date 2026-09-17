#include <stdio.h>

#define PI 3.141593

int main() {
    float raio;
    
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    
    float areaSuperficie = 4 * PI * raio * raio;
    float volume = (4.0 / 3.0) * PI * raio * raio * raio;
    
    printf("Área de Superfície: %.2f\n", areaSuperficie);
    printf("Volume: %.2f\n", volume);
    
    return 0;
}