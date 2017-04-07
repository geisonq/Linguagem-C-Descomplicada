/**************************************************************************
* Author: Lucas(heisen)
*
* Escreva um programa que, dados dois números inteiros, mostre na tela o 
* maior deles, assim como a diferença existente entre ambos.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Entre com x e y -> ");
    scanf("%d%d", &x, &y);
    
    (x > y) ? printf("%d eh é o maior. Diferença entre %d e %d eh %d\n", x, x, y, x-y) 
            : printf("%d eh é o maior. Diferença entre %d e %d eh %d\n", y, y, x, y-x);
    
    return 0;
}
