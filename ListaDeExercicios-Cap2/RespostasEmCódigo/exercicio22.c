#include <stdio.h>

int main() {
    char maiuscula;
    
    printf("Digite uma letra maiúscula: ");
    scanf("%c", &maiuscula);
    
    char minuscula = maiuscula + 32;
    
    printf("Letra original (maiúscula): %c (ASCII %d)\n", maiuscula, (int)maiuscula);
    printf("Letra convertida (minúscula): %c (ASCII %d)\n", minuscula, (int)minuscula);
    
    return 0;
}