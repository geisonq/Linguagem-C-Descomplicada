/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa que receba dois números e mostre o maior. Se por acaso,
* os dois números forem iguais, imprima a mensagem Números iguais
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Entre com x e y -> ");
    scanf("%d%d", &x, &y);

    if(x != y) {
        (x > y) ? printf("%d eh o maior\n", x) 
                : printf("%d eh o maior\n", y);
    }
    else printf("Numeros iguais\n");

    return 0;
}
