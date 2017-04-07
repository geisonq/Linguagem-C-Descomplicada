/**************************************************************************
* Author: Lucas(heisen)
*
* Uma empresa vende o mesmo produto para quatro diferentes estados. Cada 
* estado possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%
* RJ 15%; MS 8%). Faça um programa em que o usuário entre com o valor e o 
* estado destino do produto e o programa retorne o preço final do produto 
* acrescido do imposto do estado em que ele será vendido. Se o estado 
* digitado não for válido, mostrar uma mensagem de erro.
**************************************************************************/
#include <stdio.h>
#include <string.h>
#define IMP_MG 0.07
#define IMP_SP 0.12
#define IMP_RJ 0.15
#define IMP_MS 0.08

int main(void)
{
    float preco;
    char estado[2];
    printf("Entre com o preco do produto -> ");
    scanf("%f", &preco);

    printf("Entre com o estado -> ");
    scanf("%s", estado);

    if(strcmp(estado, "MG") == 0) printf("[λ] Total %.2f\n", preco * IMP_MG + preco);
    else if(strcmp(estado, "SP") == 0) printf("[λ] Total %.2f\n", preco * IMP_SP + preco);
    else if(strcmp(estado, "RJ") == 0) printf("[λ] Total %.2f\n", preco * IMP_RJ + preco);
    else if(strcmp(estado, "MS") == 0) printf("[λ] Total %.2f\n", preco * IMP_MS + preco);
    else printf("[λ] Somente os estados MG, SP, RJ, MS sao validos\n");

    return 0;
}
