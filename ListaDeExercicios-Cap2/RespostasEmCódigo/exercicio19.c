#include <stdio.h>

int main() {
    int diasTrabalhados;
    float taxaDiaria = 30.0;
    float aliquotaImposto = 0.08;
    
    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);
    
    float salarioBruto = diasTrabalhados * taxaDiaria;
    float imposto = salarioBruto * aliquotaImposto;
    float salarioLiquido = salarioBruto - imposto;
    
    printf("\nSalário Bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto de Renda (8%%): R$ %.2f\n", imposto);
    printf("Salário Líquido: R$ %.2f\n", salarioLiquido);
    
    return 0;
}