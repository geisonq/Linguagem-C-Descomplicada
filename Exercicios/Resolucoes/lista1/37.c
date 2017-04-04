/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa que leia o valor de um produto e imprima o valor com 
* desconto, tendo em vista que o desconto foi de 12%
**************************************************************************/
#include <stdio.h>
#define DESCONTO 0.12
int main(void)
{
    float p;
    printf("Entre com o valor do produto -> ");
    scanf("%f", &p);

    printf("[+] Valor com desconto -> %.2f\n", p - (p * DESCONTO));
}
