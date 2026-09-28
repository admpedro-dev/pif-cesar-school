#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int n;
    long long int somaFatorial = 1;

    printf("Digite o número para exibirmos o fatorial dele: ");
    scanf("%lld", &n);
    

    if (n < 0) {

        printf("Erro! Nao existe fatorial negativo");

    } else {
        for(long long int i = n; i > 0; i--) {
        
        somaFatorial *= i;
    }

    printf("%lld", somaFatorial);
    }

    system("PAUSE");
    return 0;
}