/**************************************************************************
* Author: Lucas(heisen)
*
* Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e 
* imprima o dia da semana correspondente a este numero. Isto é, domingo se 
* 1, segunda-feira se 2, e assim por diante.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    unsigned int n;
    printf("Entre com numero entre 1 e 7 λ> ");
    scanf("%d", &n);
    
    switch(n)
    {
        case 1: printf("Domingo\n"); break;
        case 2: printf("Segunda-Feira\n"); break;
        case 3: printf("Terca-Feira\n"); break;
        case 4: printf("Quarta-Feira\n"); break;
        case 5: printf("Quinta-Feira\n"); break;
        case 6: printf("Sexta-Feira\n"); break;
        case 7: printf("Sabado\n"); break;
    }
    
    return 0;
}

