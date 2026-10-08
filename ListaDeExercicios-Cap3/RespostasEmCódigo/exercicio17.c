#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota, soma = 0, maior = 0, menor = 10;
    int total = 0;

    printf("Digite as notas (-1.0 para encerrar):\n");
    scanf("%f", &nota);

    while (nota != -1.0) {
        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida! Use de 0.0 a 10.0.\n");
        } else {
            if (nota > maior) {
                maior = nota;
            }
            if (nota < menor) {
                menor = nota;
            }
            soma += nota;
            total++;
        }
        scanf("%f", &nota);
    }

    if (total > 0) {
        printf("Total de alunos: %d\n", total);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media da turma: %.2f\n", soma / total);
    } else {
        printf("Nenhuma nota valida foi digitada.\n");
    }

    system("PAUSE");
    return 0;
}