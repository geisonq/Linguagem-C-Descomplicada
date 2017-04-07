/**************************************************************************
* Author: Lucas(heisen)
*
* Determine se um determinado ano lido é bissexto. Sendo que um ano é 
* bissexto se for divisı́vel por 400 ou se for divisı́vel por 4 e não for 
* divisı́vel por 100. Por exemplo: 1988, 1992, 1996
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int a;
    printf("Entre com um ano qualquer -> ");
    scanf("%d", &a);
    
    (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))
        ? printf("Ano bixesto\n")
        : printf("Nao eh bixesto\n");
    
    return 0;
}
