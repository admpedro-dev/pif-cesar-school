#include <stdio.h>

int main() {
    float lado, base, altura;
    
    // Quadrado
    printf("Digite o lado do quadrado (L): ");
    scanf("%f", &lado);
    float areaQuadrado = lado * lado;
    printf("Área do quadrado: %.2f\n\n", areaQuadrado);
    
    // Retângulo
    printf("Digite a base do retângulo (B): ");
    scanf("%f", &base);
    printf("Digite a altura do retângulo (H): ");
    scanf("%f", &altura);
    float areaRetangulo = base * altura;
    printf("Área do retângulo: %.2f\n\n", areaRetangulo);
    
    // Triângulo Retângulo
    printf("Digite a base do triângulo (B): ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo (H): ");
    scanf("%f", &altura);
    float areaTriangulo = (base * altura) / 2.0;
    printf("Área do triângulo: %.2f\n", areaTriangulo);
    
    return 0;
}