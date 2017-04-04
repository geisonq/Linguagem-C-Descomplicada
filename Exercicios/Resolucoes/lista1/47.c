/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um número inteiro de 4 dı́gitos (de 1000 a 9999) e imprima 1 dı́gito
* por linha.
**************************************************************************/
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    
    printf("Entre com um número inteiro de quatro digitos -> ");
    n = GetInt();

    printf("%d \n", n / 1000);
    printf("%d \n", (n % 1000) / 100);
    printf("%d \n", (n % 100) / 10);
    printf("%d \n", n % 10);
}
