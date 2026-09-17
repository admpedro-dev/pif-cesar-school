#include <stdio.h>
#include <math.h>

int main() {
    float ladoA, ladoB;
    
    printf("Digite o primeiro cateto: ");
    scanf("%f", &ladoA);
    
    printf("Digite o segundo cateto: ");
    scanf("%f", &ladoB);
    
    float hipotenusa = sqrt(ladoA * ladoA + ladoB * ladoB);
    
    printf("Hipotenusa: %.2f\n", hipotenusa);
    
    return 0;
}