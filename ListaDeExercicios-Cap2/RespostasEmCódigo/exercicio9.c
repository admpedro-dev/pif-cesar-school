#include <stdio.h>

int main() {
    int a, b;
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &a);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &b);
    
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    float divisao = a / (float)b;
    
    printf("\nResultados:\n");
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);
    
    return 0;
}