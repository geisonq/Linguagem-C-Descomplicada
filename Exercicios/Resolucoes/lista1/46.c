/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa que leia um número inteiro positivo de três dı́gitos 
* (de 100 a 999). Gere outro número formado pelos dı́gitos invertidos do 
* número lido. Exemplo:
* NúmeroLido = 123
* NúmeroGerado = 321
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int n, i;
    printf("Entre com um numero de 3 digitos -> ");
    scanf("%d", &n);
    
    i = (((n % 10) * 100)) + (((n / 10) % 10) * 10) + (n / 100);
    printf("%d inverso -> %d\n", n, i);
    
    return 0;
}
