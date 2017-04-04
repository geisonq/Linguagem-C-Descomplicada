/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa que leia o valor da hora de trabalho (em reais) e número 
* de horas trabalhadas no mês. Imprima o valor a ser pago ao funcionário, 
* adicionando 10% sobre o valor calculado 
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float vht; int nht;
    printf("Entre com o valor da hora de trabalho e com a quantidade de horas trabalhadas -> ");
    scanf("%f%d", &vht, &nht);

    printf("[+] Valor a ser pago -> %.2f\n", (float) vht * nht + (vht * nht) * 0.10);

    return 0;
}
