#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    /* Carro */
    printf("  ▄▄████▄▄\n");
    printf("  ▀O▀▀▀▀▀O▀\n");
    printf("\n");
    
    /* Caminhonete */
    printf(" ▄▄█ ██████\n");
    printf("▀O▀▀▀▀▀OO▀\n");
    
    /* Alternativa com caracteres hexadecimais (Codepage 437) */
    printf("\n--- Usando caracteres hexadecimais ---\n\n");
    
    /* Carro com \xDC (bloco superior) */
    printf("  %c%c%c%c%c%c%c%c\n", 0xDC, 0xDC, 0xDF, 0xDF, 0xDF, 0xDF, 0xDC, 0xDC);
    printf("  O               O\n");
    printf("\n");
    
    /* Caminhonete */
    printf(" %c%c%c  %c%c%c%c%c%c\n", 0xDC, 0xDC, 0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 0xDF);
    printf("O                 O\n");
    
    system("PAUSE");
    return 0;
}
