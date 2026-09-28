#include <stdio.h>
#include <stdlib.h>

int main(){
    double entrada = -1;

    do {

        printf("Digite a entrada: ");
        scanf("%lf", &entrada);

        if(entrada < 0 || entrada > 10) {
            printf("Entrada recusada!\n");
        }
        
        
    } while (entrada < 0 || entrada > 10);

    printf("Entrada correta!");

    system("PAUSE");
    return 0;
}