/**************************************************************************
* Author: Lucas(heisen)
*
* O custo ao consumidor de um carro novo é a soma do custo de fábrica, da 
* comissão do distribuidor, e dos impostos. A comissão e os impostos são 
* calculados sobre o custo de fábrica, de acordo com a tabela abaixo. Leia 
* o custo de fábrica e escreva o custo ao consumidor.
* 
* |       CUSTO DE FÁBRICA        | % DO DISTRIBUIDOR | % DOS IMPOSTOS |
* |-------------------------------|-------------------|----------------|
* | até R$12.000,00               |                 5 | isento         |
* | entre R$12.000,00 e 25.000,00 |                10 | 15             |
* | acima de R$25.000,            |                15 | 20             |
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float cf;
    printf("Entre com o preco de fabrica -> ");
    scanf("%f", &cf);
    
    if(cf <= 12000) printf("Custo ao consumidor -> %.2f\n", cf + (cf * 0.05));
    else if(cf < 25000) printf("Custo ao consumidor -> %.2f\n", cf + (cf * 0.10) + (cf * 0.15));
    else printf("Custo ao consumidor -> %.2f\n", cf + (cf * 0.15) + (cf * 0.20));
    
    return 0;
}
