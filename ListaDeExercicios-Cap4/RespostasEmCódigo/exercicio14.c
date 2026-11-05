#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota;
    int faltas;

    printf("Digite a nota: ");
    scanf("%f", &nota);
    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    if (nota < 0.0 || nota > 10.0) {
        printf("Nota invalida!\n");
    } else if (nota >= 9.0) {
        if (faltas <= 20) {
            printf("Conceito A\n");
        } else {
            printf("Conceito B\n");
        }
    } else if (nota >= 7.5) {
        if (faltas <= 20) {
            printf("Conceito B\n");
        } else {
            printf("Conceito C\n");
        }
    } else if (nota >= 5.0) {
        if (faltas <= 20) {
            printf("Conceito C\n");
        } else {
            printf("Conceito D\n");
        }
    } else if (nota >= 4.0) {
        if (faltas <= 20) {
            printf("Conceito D\n");
        } else {
            printf("Conceito E\n");
        }
    } else {
        printf("Conceito E\n");
    }

    system("PAUSE");
    return 0;
}