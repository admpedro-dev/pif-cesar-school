#include <stdio.h>

int main() {
    float celsius;
    
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    
    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    float kelvin = celsius + 273.15;
    
    printf("Temperatura em Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Temperatura em Kelvin: %.2f K\n", kelvin);
    
    return 0;
}