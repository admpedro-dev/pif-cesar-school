#include <stdio.h>

int main() {
    int horasNormais, horasExtras;
    float taxaNormal = 10.0;
    float taxaExtra = 15.0;
    float limiteIsencao = 12000.0;
    float aliquotaImposto = 0.10;
    
    printf("Digite as horas normais trabalhadas no ano: ");
    scanf("%d", &horasNormais);
    
    printf("Digite as horas extras trabalhadas no ano: ");
    scanf("%d", &horasExtras);
    
    float salarioBruto = (horasNormais * taxaNormal) + (horasExtras * taxaExtra);
    float imposto = (salarioBruto > limiteIsencao) ? 
                    ((salarioBruto - limiteIsencao) * aliquotaImposto) : 
                    0.0;
    
    float salarioLiquido = salarioBruto - imposto;
    
    printf("\n=== CÁLCULO DE SALÁRIO ANUAL ===\n");
    printf("Horas normais: %d × R$ %.2f = R$ %.2f\n", horasNormais, taxaNormal, horasNormais * taxaNormal);
    printf("Horas extras: %d × R$ %.2f = R$ %.2f\n", horasExtras, taxaExtra, horasExtras * taxaExtra);
    printf("Salário Bruto: R$ %.2f\n", salarioBruto);
    printf("Limite de isenção: R$ %.2f\n", limiteIsencao);
    printf("Imposto (10%% sobre excedente): R$ %.2f\n", imposto);
    printf("Salário Líquido: R$ %.2f\n", salarioLiquido);
    
    return 0;
}