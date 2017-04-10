/**************************************************************************
* Author: Lucas(heisen)
*
* Escreva um programa que, dado o valor da venda, imprima a comissão que 
* deverá ser paga ao vendedor. Para calcular a comissão, considere a tabela
* abaixo:
* 
* |                      Venda mensal                       |         Comissão          |
* |---------------------------------------------------------|---------------------------|
* | Maior ou igual a R$100.000,00                           | R$700,00 + 16% das vendas |
* | Menor que R$100.000,00 e maior ou igual a R$80.000,00   | R$650,00 + 14% das vendas |
* | Menor que R$80.000,00 e maior ou igual a R$60.000,00    | R$600,00 + 14% das vendas |
* | Menor que R$60.000,00 e maior ou igual a R$40.000,00    | R$550,00 + 14% das vendas |
* | Menor que R$40.000,00 e maior ou igual a R$20.000,00    | R$500,00 + 14% das vendas |
* | Menor que R$20.000,00                                   | R$400,00 + 14% das vendas |
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float venda;    
    printf("Entre com o valor da venda -> ");
    scanf("%f", &venda);
    
    if(venda >= 100.000) printf("Comissao -> %.2f\n", 700 + (venda * 0.16));
    else if(venda >= 80.000) printf("Comissao -> %.2f\n", 650 + (venda * 0.14));
    else if(venda >= 60.000) printf("Comissao %.2f\n", 600 + (venda * 0.14));
    else if(venda >= 40.000) printf("Comissao %.2f\n", 550 + (venda * 0.14));
    else if(venda >= 20.000) printf("Comissao %.2f\n", 500 + (venda * 0.14));
    else printf("Comissao %.2f\n", 400 + (venda * 0.14));
    
    return 0;
}

