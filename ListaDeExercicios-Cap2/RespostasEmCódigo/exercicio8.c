#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    int quadrado = numero * numero;
    float decimaParte = numero / 10.0;
    
    printf("Quadrado: %d\n", quadrado);
    printf("Décima parte: %.2f\n", decimaParte);
    
    return 0;
}