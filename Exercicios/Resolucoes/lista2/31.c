/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa que leia a altura e o peso de uma pessoa. De acordo com 
* a tabela a seguir, verifique e mostre qual a classificação dessa pessoa.
*
*  +-------------------+-----------------------------------------------------+
*  |                   |                        Peso                         |
*  |       Altura      +----------+--------------------------+---------------+
*  |                   |  Até 60  |  Entre 60-90(inclusive)  |  Acima de 90  |
*  +-------------------+----------+--------------------------+---------------+
*  | Menor do que 1,20 |    A     |            D             |       G       |
*  +-------------------+----------+--------------------------+---------------+
*  |     1,20-1,70     |    B     |            E             |       H       |
*  +-------------------+----------+--------------------------+---------------+
*  | Maior do que 1,70 |    C     |            F             |       I       |
*  +-------------------+----------+--------------------------+---------------+
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float altura, peso;
    printf("Entre com a altura λ> ");
    scanf("%f", &altura);
    
    printf("Entr com o peso λ> ");
    scanf("%f", &peso);

    if(altura < 1.20)
    {
        if(peso <= 60) printf("[λ] Classificacao A\n");
        else (peso <= 90) ? printf("[λ] Classificacao D\n") : printf("[λ] Classificacao G\n");
    }
    else if(altura < 1.70)
    {
        if(peso <= 60) printf("[λ] Classificacao B\n");
        else (peso <= 90) ? printf("[λ] Classificacao E\n") : printf("[λ] Classificacao H\n");
    }
    else
    {
        if(peso <= 60) printf("[λ] Classificacao C\n");
        else (peso <= 90) ? printf("[λ] Classificacao F\n") : printf("[λ] Classificacao I\n");
    }

    return 0;
}
