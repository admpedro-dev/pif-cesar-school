#include <stdio.h>
#include <stdlib.h>

int main(){

    int senha = 2026;
    int tentativas = 0;
    int chute = 0;

    for(int i = 0; i < 3; i++){
        printf("Digite a senha: ");
        scanf("%d", &chute);

        if (chute != 2026) {
            printf("\nSenha incorreta\n");
            tentativas++;
        } else {
            printf("Acesso concedido!\n");
            break;
        }        
    }

    if (tentativas == 3) {
        printf("Conta bloqueada por segurança!");
    }


    system("PAUSE");
    return 0;
}
