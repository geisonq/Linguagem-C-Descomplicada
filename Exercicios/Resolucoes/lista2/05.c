/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa que receba um número inteiro e verifique se este número
* é par ou ı́mpar.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int n;
    printf("Entre com n -> ");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("%d eh par\n", n)
                 : printf("%d eh impar\n", n); 

    return 0;
}
