#include <stdio.h>

int main() {
    int horas, minutos, segundos;
    int duracaoSegundos;
    
    printf("Digite o horário de início do experimento:\n");
    printf("Horas: ");
    scanf("%d", &horas);
    printf("Minutos: ");
    scanf("%d", &minutos);
    printf("Segundos: ");
    scanf("%d", &segundos);
    
    printf("Digite a duração do experimento (em segundos): ");
    scanf("%d", &duracaoSegundos);
    
    int tempoInicialSeg = horas * 3600 + minutos * 60 + segundos;
    int tempoFinalSeg = tempoInicialSeg + duracaoSegundos;
    
    int horaFim = (tempoFinalSeg / 3600) % 24;
    int minutoFim = (tempoFinalSeg % 3600) / 60;
    int segundoFim = tempoFinalSeg % 60;
    
    printf("\nHorário de término: %02d:%02d:%02d\n", horaFim, minutoFim, segundoFim);
    
    return 0;
}