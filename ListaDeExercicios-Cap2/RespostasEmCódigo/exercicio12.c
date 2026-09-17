#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    int antecessor = numero;
    int sucessor = numero;
    
    antecessor--;
    sucessor++;
    
    printf("Antecessor: %d\n", antecessor);
    printf("Número original: %d\n", numero);
    printf("Sucessor: %d\n", sucessor);
    
    return 0;
}