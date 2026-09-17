#include <stdio.h>

int main() {
    float alturaDegrauCm, alturaTotalM;
    
    printf("Digite a altura de cada degrau (em centímetros): ");
    scanf("%f", &alturaDegrauCm);
    
    printf("Digite a altura total desejada (em metros): ");
    scanf("%f", &alturaTotalM);
    
    float alturaTotalCm = alturaTotalM * 100.0;
    int numDegraus = (int)(alturaTotalCm / alturaDegrauCm);
    
    printf("\nNúmero mínimo de degraus: %d\n", numDegraus);
    printf("Altura alcançada: %.2f metros\n", (numDegraus * alturaDegrauCm) / 100.0);
    
    return 0;
}