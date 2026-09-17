#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    
    printf("Digite as quatro notas:\n");
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);
    printf("Nota 4: ");
    scanf("%f", &nota4);
    
    float mediaSimples = (nota1 + nota2 + nota3 + nota4) / 4.0;
    float mediaPonderada = (nota1 * 1 + nota2 * 1 + nota3 * 2 + nota4 * 2) / (1 + 1 + 2 + 2);
    
    printf("\nMédia Aritmética Simples: %.2f\n", mediaSimples);
    printf("Média Ponderada: %.2f\n", mediaPonderada);
    
    return 0;
}