#include <stdio.h>

int main() {
    float comprimento, largura, precoMetro;
    
    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);
    
    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);
    
    printf("Digite o preço do arame farpado por metro (em reais): ");
    scanf("%f", &precoMetro);
    
    float perimetro = 2 * (comprimento + largura);
    float metrosArame = perimetro * 3;
    float custoTotal = metrosArame * precoMetro;
    
    printf("\nPerímetro do terreno: %.2f metros\n", perimetro);
    printf("Arame necessário (3 fios): %.2f metros\n", metrosArame);
    printf("Custo total: R$ %.2f\n", custoTotal);
    
    return 0;
}