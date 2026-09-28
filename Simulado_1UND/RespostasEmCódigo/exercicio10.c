#include <stdio.h>
#include <stdlib.h>

int main() {

    int totalSegundos = 0;
    int segundos, horas, minutos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    // divisao inteira da 1 e descarta o resto
    // horas = 1
    minutos = (totalSegundos % 3600) / 60;
    // 3665 % 3600 sobra 65, 65/60 da 1 e descarta o resto
    // minutos = 1
    segundos = totalSegundos % 60;
    // 3665 % 60
    // sobra 5

    printf("%d segundos corresnpondem a %d hora(s). %d minuto(s) e %d segundo(s)\n", totalSegundos, horas, minutos, segundos);


    system("PAUSE");
    return 0;
}