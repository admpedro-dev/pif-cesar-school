#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    
    printf("Digite os três lados do triângulo:\n");
    printf("Lado a: ");
    scanf("%f", &a);
    printf("Lado b: ");
    scanf("%f", &b);
    printf("Lado c: ");
    scanf("%f", &c);
    
    float semiPerimetro = (a + b + c) / 2.0;
    float area = sqrt(semiPerimetro * (semiPerimetro - a) * (semiPerimetro - b) * (semiPerimetro - c));
    
    printf("Semi-perímetro: %.2f\n", semiPerimetro);
    printf("Área do triângulo: %.2f\n", area);
    
    return 0;
}