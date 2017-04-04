/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa para converter uma letra maiúscula em letra minúscula. 
* Use a tabela ASCII para resolver o problema.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    char c;
    printf("Entre com um caractere maiusculo λ> ");
    scanf("%c", &c);
    
    printf("%c -> %c\n", c, c + 32);
    
    return 0;
}
