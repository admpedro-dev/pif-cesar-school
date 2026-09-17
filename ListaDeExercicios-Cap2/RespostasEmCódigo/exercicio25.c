#include <stdio.h>

int main() {
    float salarioBase;
    
    printf("Digite o salário-base: R$ ");
    scanf("%f", &salarioBase);
    
    float gratificacao = salarioBase * 0.05;
    float imposto = salarioBase * 0.07;
    float salarioLiquido = salarioBase + gratificacao - imposto;
    
    printf("\nSalário Base: R$ %.2f\n", salarioBase);
    printf("Gratificação (5%%): R$ %.2f\n", gratificacao);
    printf("Imposto (7%%): R$ %.2f\n", imposto);
    printf("Salário Líquido: R$ %.2f\n", salarioLiquido);
    
    
    return 0;
}