/**************************************************************************
* Author: Lucas(heisen)
*
* Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa 
* que solicite o número de dias trabalhados pelo encanador e imprima a 
* quantia lı́quida que deverá ser paga, sabendo-se que são descontados 8% 
* para imposto de renda. 
**************************************************************************/
#include <stdio.h>
#define PRECO_DIA 30.00
#define IMPOSTO 0.08

int main(void)
{
    unsigned int d;
    printf("Entre com o numero de dias trabalhados -> ");
    scanf("%d", &d);

    printf("[+] Valor liquido -> %.2f\n", PRECO_DIA * d - (PRECO_DIA * d) * IMPOSTO);
    
    return 0;
}
