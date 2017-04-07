/**************************************************************************
* Author: Lucas(heisen)
*
* Leia a distância em Km e a quantidade de litros de gasolina consumidos 
* por um carro em um percurso, calcule o consumo em Km/l e escreva uma 
* mensagem de acordo com a tabela abaixo:
*
* CONSUMO      (Km/l)     MENSAGEM
*  menor que    8          Venda o carro!
*  entre        8 e 14     Econômico!
*  maior que    14         Super econômico!
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int ql; float dkm, c;
    printf("Entre com a distancia em km -> ");
    scanf("%F", &dkm);
    printf("Entre com a quantidade de litros de gasolina consumida -> ");
    scanf("%d", &ql);
    
    c = dkm / ql;   // calcula o consumo em Km/l
    
    if(c < 8) printf("Venda o carro!\n");
    else if(c <= 14) printf("Economico\n");
    else printf("Super Economico\n");
    
    return 0;
}
