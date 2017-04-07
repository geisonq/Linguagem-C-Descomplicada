/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
* (basemaior + basemenor) * altura / 2
* Lembre-se a base maior e a base menor devem ser números maiores que zero.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    unsigned int n;
    printf("Digite um numero(1-12) -> ");
    scanf("%d", &n);
    
    switch(n)
    {
        case 1: printf("Janeiro\n"); break;
        case 2: printf("Fevereiro\n"); break;
        case 3: printf("Marco\n"); break;
        case 4: printf("Abril\n"); break;
        case 5: printf("Maio\n"); break;
        case 6: printf("Junho\n"); break;
        case 7: printf("Julho\n"); break;
        case 8: printf("Agosto\n"); break;
        case 9: printf("Setembro\n"); break;
        case 10: printf("Outubro\n"); break;
        case 11: printf("Novembro\n"); break;
        case 12: printf("Dezembro\n"); break;
    }
    
    return 0;
}
