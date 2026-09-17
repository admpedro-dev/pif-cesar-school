#include <stdio.h>

int main() {
    int dia, mes, ano;
    
    printf("Digite uma data no formato dia/mes/ano: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    printf("Data invertida (ano/mes/dia): %d/%d/%d\n", ano, mes, dia);
    
    return 0;
}