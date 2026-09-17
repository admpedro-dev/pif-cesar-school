#include <stdio.h>

int main() {
    char caractere;
    
    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    
    printf("Caractere: %c\n", caractere);
    printf("Código ASCII: %d\n", (int)caractere);
    
    /* Explicação:
       A tabela ASCII associa cada caractere a um número único de 1 byte (0-127).
       Quando imprimimos um char como %d, obtemos seu valor numérico correspondente.
    */
    
    return 0;
}