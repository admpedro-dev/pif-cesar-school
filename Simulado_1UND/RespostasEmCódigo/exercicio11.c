#include <stdio.h>
#include <stdlib.h>

int main(){
    // 45 por dia

    double diasTrabalhados, salarioBruto, salarioLiquido, gratificacao, imposto;

    printf("Digite o número de dias trabalhados: ");
    scanf("%lf", &diasTrabalhados);

    salarioBruto = diasTrabalhados * 45;
    gratificacao = salarioBruto * 0.05;
    imposto = salarioBruto * 0.08;

    salarioLiquido = salarioBruto + gratificacao - imposto;

    printf("O salario bruto é de: R$%.2lf\n", salarioBruto);
    printf("A gratificacao é de: R$%.2lf\n", gratificacao);
    printf("O imposto é de: R$%.2lf\n", imposto);
    printf("O salario liquido é de: R$%.2lf\n", salarioLiquido);

    
    system("PAUSE");
    return 0;
}