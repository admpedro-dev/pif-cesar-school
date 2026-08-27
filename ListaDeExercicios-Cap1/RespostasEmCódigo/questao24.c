#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    printf("ALUNO(A)      NOTA\n");
    printf("========= =====\n");
    printf("%-10s %5.1f\n", "ALINE", 9.0);
    printf("%-10s %5.1s\n", "MÁRIO", "DEZ");
    printf("%-10s %5.1f\n", "SÉRGIO", 4.5);
    printf("%-10s %5.1f\n", "SHIRLEY", 7.0);
    
    system("PAUSE");
    return 0;
}
