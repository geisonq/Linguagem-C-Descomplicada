/**************************************************************************
* Author: Lucas(heisen)
*
* A importância de R$ 780.000,00 será dividida entre três ganhadores de um 
* concurso.Sendo que da quantia total:
* > O primeiro ganhador receberá 46%;
* > O segundo receberá 32%;
* > O terceiro receberá o restante;
**************************************************************************/
#include <stdio.h>

int main(void)
{
    // Valor do premio
    const float V = 780000;
    
    // Percentual do primeiro e do segundo ganhador
    const float PG1 = 0.46;
    const float PG2 = 0.32;
    
    // g1 = Ganhador 1, g2 = [...]
    float g1 = PG1 * V;
    float g2 = PG2 * V;
    float g3 = V - (g1 + g2);
    
    printf("O primeiro ganhador receberá R$ %.2f o segundo R$ %.2f e o terceiro R$ %.2f\n", g1, g2, g3);
    
    return 0;
}
