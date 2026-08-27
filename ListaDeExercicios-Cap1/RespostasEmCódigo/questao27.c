#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int segundos_total
    int horas
    int minutos
    int segundos;
    
    printf("Digite o intervalo de tempo em segundos: ");
    scanf("%d", &segundos_total);
    
    horas = segundos_total / 3600;
    minutos = (segundos_total % 3600) / 60;
    segundos = segundos_total % 60;
    
    printf("\n%d segundo(s) equivalem a:\n", segundos_total);
    printf("%d hora(s), %d minuto(s) e %d segundo(s)\n", horas, minutos, segundos);
    
    system("PAUSE");
    return 0;
}
