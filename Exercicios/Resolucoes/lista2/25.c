/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa que leia os coeficientes de uma equacao do segundo grau. 
* Em seguida, calcule e mostre as raizes dessa equacao, lembrando que as 
* raizes sao calculadas como (-b + raizq(∆)) / (2 * a) 
* (-b - raizq(∆)) / (2 * a) em que Δ = b² – 4 * a * c e ax² + bx + c = 0 
* representa uma equacao do segundo grau. A variavel a tem de ser diferente 
* de zero. Caso seja igual, imprima a mensagem "Não é equacao do segundo 
* grau". Do contrario imprima: Se Δ < 0, nao existe real. Imprima a 
* mensagem "Nao existe raiz" Se Δ = 0 existe uma raiz real. Imprima a 
* raiz e a mensagem "Raiz unica" Se Δ > 0, existem duas raizes reais. 
* Imprima as raizes.
**************************************************************************/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, b, c, delta;
    printf("Entre com os coeficientes -> ");
    scanf("%d%d%d", &a, &b, &c);

    if(a != 0)
    {
        delta = (b * b) - (4 * a * c);
        if (delta < 0 ) printf("Nao existe raiz real\n");
        else if(delta == 0)
        {
            printf("Existe uma raiz real\n");
            printf("[+] %.2f\n", (float) (-b) / (2 * a));
        }
        else
        {
            printf("Existem duas raizes reais\n");
            printf("[+] %.2f\n", (float) (-b + sqrt(delta)) / (2 * a));
            printf("[+] %.2f\n", (float) (-b - sqrt(delta)) / (2 * a));
        }
    }
    else printf("Estes valores nao formam uma equacao do 2 grau\n");

    return 0;
}
