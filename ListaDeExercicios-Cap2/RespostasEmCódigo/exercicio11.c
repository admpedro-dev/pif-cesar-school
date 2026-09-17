#include <stdio.h>

#define PI 3.141593

int main() {
    float graus;
    
    printf("Digite um ângulo em graus: ");
    scanf("%f", &graus);
    
    float radianos = graus * (PI / 180.0);
    
    printf("%.2f graus = %.6f radianos\n", graus, radianos);
    
    return 0;
}