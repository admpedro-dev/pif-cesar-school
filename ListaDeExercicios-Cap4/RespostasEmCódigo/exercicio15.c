#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade, tempo;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o tempo de servico (anos): ");
    scanf("%d", &tempo);

    if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)) {
        printf("O trabalhador PODE se aposentar.\n");
    } else {
        printf("O trabalhador NAO pode se aposentar.\n");
    }

    system("PAUSE");
    return 0;
}