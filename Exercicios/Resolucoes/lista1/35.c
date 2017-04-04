/**************************************************************************
* Author: Lucas(heisen)
*
* Sejam a e b os  catetos de um triângulo, onde a hipotenusa é obtida pela 
* equação: hipotenusa = √a²+b² . Faça um programa que receba os valores 
* de a e b e calcule o valor da hipotenusa através da equação. Imprima o 
* resultado dessa operação.
**************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;
    printf("Entre com a e b -> ");
    scanf("%d%d", &a, &b);

    printf("[+] Hipotenusa -> %.2f\n", (float) sqrt((a*a) + (b*b)));
}
