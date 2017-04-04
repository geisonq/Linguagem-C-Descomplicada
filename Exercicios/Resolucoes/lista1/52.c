/**************************************************************************
* Author: Lucas(heisen)
*
* Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser 
* repartido proporcionalmente ao valor que cada deu para a realização da 
* aposta. Faça um programa que leia quanto cada apostador investiu e o 
* valor do prêmio, e imprima quanto cada um ganharia do prêmio com base no 
* valor investido.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float a1, a2, a3, vp;
    printf("Entre com valor de 3 apostas -> ");
    scanf("%f%f%f", &a1, &a2, &a3);
    printf("Entre com o valor do premio -> ");
    scanf("%f", &vp);
    
    float soma = a1 + a2 + a3;
    printf("[+] Primeiro apostador ganha -> %.2f\n", (vp/soma) * a1);
    printf("[+] Segundo apostador ganha -> %.2f\n", (vp/soma) * a2);
    printf("[+] Terceiro apostador ganha -> %.2f\n", (vp/soma) * a3);
    
    return 0;
}
