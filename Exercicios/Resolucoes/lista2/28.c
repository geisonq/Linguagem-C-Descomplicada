/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa que leia três números inteiros positivos e efetue o 
* cálculo de uma das seguintes médias de acordo com um valor numérico 
* digitado pelo usuário e mostrado na tabela a seguir:
*
*  Número   digitado Média  
* -------- ---------------- 
*  1        Geométrica: x*y*z
*  2        Ponderada: (x + 2 * y + 3 * z) / 6
*  3        Harmônica: 3 / (1/x) + (1/y) + (1/z)
*  4        Aritmética: (x + y + z) / 3
**************************************************************************/

#include <stdio.h>
int main(void)
{
    float x, y, z; unsigned int op;
    printf("Entre com x, y, z λ> ");
    scanf("%f%f%f", &x, &y, &z);

    printf("Qual media deseja calcular?\n");
    printf("Opções: [1] Geometrica [2] Ponderada [3] Harmonica [4] Aritmetica λ> ");
    scanf("%d", &op);

    switch(op)
    {
        case 1: printf("[1] media geometrica %.2f\n", x*y*z); break;
        case 2: printf("[2] media ponderada %.2f\n", (x+2*y+3*z)/6); break;
        case 3: printf("[3] media harmonica %.2f\n", 3/(1/x+1/y+1/z)); break;
        case 4: printf("[4] media aritmetica %.2f\n", (x+y+z)/3); break;
    }

}
