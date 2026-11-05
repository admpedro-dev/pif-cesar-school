#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, aumento = 0;
    int cargo, valido = 1;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    printf("Codigo do cargo (1 = Tecnico, 2 = Gerente, 3 = Demais): ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            if (salario <= 3000) {
                aumento = salario * 0.15;
            } else {
                aumento = salario * 0.10;
            }
            break;
        case 2:
            if (salario <= 5000) {
                aumento = salario * 0.10;
            } else {
                aumento = salario * 0.05;
            }
            break;
        case 3:
            aumento = salario * 0.08;
            break;
        default:
            valido = 0;
            printf("Codigo de cargo invalido!\n");
    }

    if (valido == 1) {
        printf("Aumento: R$ %.2f\n", aumento);
        printf("Novo salario: R$ %.2f\n", salario + aumento);
    }

    system("PAUSE");
    return 0;
}