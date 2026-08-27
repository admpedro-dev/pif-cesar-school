#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    float precoLapis = 4.88;
    float precoBorrachas = 234.54;
    float precoCanetas = 42.04;
    float precoCadernos = 8.00;
    float precoFitas = 13.05;
    
    printf("%12s %10.2f\n", "Lápis", precoLapis);
    printf("%12s %10.2f\n", "Borrachas", precoBorrachas);
    printf("%12s %10.2f\n", "Canetas", precoCanetas);
    printf("%12s %10.2f\n", "Cadernos", precoCadernos);
    printf("%12s %10.2f\n", "Fitas", precoFitas);
    
    system("PAUSE");
    return 0;
}
