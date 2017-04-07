/**************************************************************************
* Author: Lucas(heisen)
*
* Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o 
* preço antigo, calcule e escreva o preço novo, e escreva uma mensagem em 
* função do preço novo (de acordo com a segunda tabela).
* 
* |     PREÇO ANTIGO     | PERCENTUAL DE AUMENTO |
* |----------------------|-----------------------|
* | até R$ 50            | 5%                    |
* | entre R$ 50 e R$ 100 | 10%                   |
* | acima de R$ 100      | 15%                   |
* +==============================================+
* |           PREÇO NOVO           |  MENSAGEM   |
* |--------------------------------|-------------|
* | até R$80                       | Barato      |
* | entre R$80 e R$120(inclusive)  | Normal      |
* | entre R$120 e R$200(inclusive) | Caro        |
* | acima de R$200                 | Muito caro  |
**************************************************************************/
#include <stdio.h>
#define PERC_ABAIXO_50 0.05
#define PERC_ENTRE_50_100 0.10
#define PERC_ACIMA_100 0.15

int main(void)
{
    float prec_ant, prec_novo = 0;
    printf("Entre com o preco antigo -> ");
    scanf("%F", &prec_ant);

    if(prec_ant < 50)
    {
        prec_novo = prec_ant + (prec_ant * PERC_ABAIXO_50);
        printf("Novo preco %.2f\n", prec_novo);
    }
    else if(prec_novo < 100)
    {
        prec_novo = prec_ant + (prec_ant * PERC_ENTRE_50_100);
        printf("Novo preco %.2f\n", prec_novo);
    }
    else
    {
        prec_novo = prec_ant + (prec_ant * PERC_ACIMA_100);
        printf("Novo preco %.2f\n", prec_novo);
    }

    if(prec_novo < 80) printf("Barato\n");
    else if(prec_novo <= 120) printf("Normal\n");
    else if(prec_novo <= 200) printf("Caro\n");
    else printf("Muito Caro\n");

    return 0;
}
