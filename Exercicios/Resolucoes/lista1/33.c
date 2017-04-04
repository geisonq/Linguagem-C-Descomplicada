/**************************************************************************
* Author: Lucas(heisen)
*
* Leia o tamanho do lado de um quadrado e imprima como resultado a sua 
* area. 
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int l;
    printf("Entre com o lado do quadrado -> ");
    scanf("%d", &l);

    printf("A área do quadrado é: %d\n", l * l);

    return 0;
}
