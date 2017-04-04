/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um número inteiro e imprima a soma do sucessor de seu triplo com o 
* antecessor de seu dobro.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int n;
    printf("Digite um numero -> ");
    scanf("%d", &n);

    printf("Resultado -: %d\n", ((n * 3) + 1) + ((n * 2) - 1));
    
    return 0;
}
