#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    /* Moldura 4x4
       \xC9 = canto superior esquerdo
       \xBB = canto superior direito
       \xC8 = canto inferior esquerdo
       \xBC = canto inferior direito
       \xCD = linha horizontal
       \xBA = linha vertical
    */
    
    printf("%c%c%c%c\n", 0xC9, 0xCD, 0xCD, 0xBB);
    printf("%c%c%c%c\n", 0xBA, ' ', ' ', 0xBA);
    printf("%c%c%c%c\n", 0xBA, ' ', ' ', 0xBA);
    printf("%c%c%c%c\n", 0xC8, 0xCD, 0xCD, 0xBC);
    
    system("PAUSE");
    return 0;
}
 
