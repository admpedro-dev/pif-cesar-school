#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int valor1, valor2, valor3;
    double media;
    
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);
    
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);
    
    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &valor3);
    
    media = (valor1 + valor2 + valor3) / 3.0;
    
    printf("\nA média aritmética é: %.2f\n", media);
    
    system("PAUSE");
    return 0;
}
