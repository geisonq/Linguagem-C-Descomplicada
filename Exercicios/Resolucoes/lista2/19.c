/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa para verificar se um determinado número inteiro e 
* divisı́vel por 3 ou 5, mas não simultaneamente pelos dois.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int n;
    printf("Entre com um numero λ> ");
    scanf("%d", &n);

    if(n % 3 == 0) printf("[λ] %d eh divisivel por 3\n", n);
    else if(n % 5 == 0) printf("[λ] %d eh divisivel por 5\n", n);
    else printf("[λ] %d nao eh divisivel por 3 nem 5\n", n);

    return 0;
}
