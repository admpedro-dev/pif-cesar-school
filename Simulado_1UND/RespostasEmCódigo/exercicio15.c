#include <stdio.h>
#include <stdlib.h>

int main(){

    // Controla a qt de linhas
    int qtLinhas = 1;

    // Controla o numero printado
    int numeroPrintado = 1;

    printf("Digite a qt de linhas do triangulo de floyd: ");
    scanf("%d", &qtLinhas);

    for (int i = 1; i <= qtLinhas; i++){
        // i -> Roda J até ele ser maior que qtLinhas
        for (int j = 1; j <= i; j++) {
            printf("%d ", numeroPrintado);
            numeroPrintado++;
        }

        printf("\n");
    }


    system("PAUSE");
    return 0;
    
}
