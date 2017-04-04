/**************************************************************************
* Author: Lucas(heisen)
*
* Implemente um programa que calcule o ano de nascimento de uma pessoa a 
* partir de sua idade e do ano atual.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int idade, anoAtual;
    printf("Entre com a idade e o ano atual -> ");
    scanf("%d%d", &idade, &anoAtual);
    
    printf("[+] Ano de nascimento -> %d\n", anoAtual - idade);
    
    return 0;
}
