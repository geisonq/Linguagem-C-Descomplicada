/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int n;	
    printf("Digite um numero -> ");
    scanf("%d", &n);

    printf("Antecessor %d sucessor %d \n", n-1, n+1);
    
    return 0;
}

