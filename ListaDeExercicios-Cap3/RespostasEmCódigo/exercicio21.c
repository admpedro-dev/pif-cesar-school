#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char secreta, palpite;
    int tentativas = 0;

    srand(time(NULL));
    secreta = rand() % 26 + 'a';

    printf("Adivinhe a letra minuscula que eu sorteei!\n");

    do {
        printf("Seu palpite: ");
        scanf(" %c", &palpite);
        tentativas++;

        if (palpite < secreta) {
            printf("A letra secreta vem DEPOIS de '%c'.\n", palpite);
        } else if (palpite > secreta) {
            printf("A letra secreta vem ANTES de '%c'.\n", palpite);
        }
    } while (palpite != secreta);

    printf("Parabens! Voce acertou a letra '%c' em %d tentativa(s).\n", secreta, tentativas);
    system("PAUSE");
    return 0;
}