/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa que mostre ao usuário um menu com 4 opções de operações 
* matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções
* e o seu programa então pede dois valores numéricos e realiza a operação,
* mostrando o resultado e saindo.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    unsigned int op;
    int x, y;
    printf("Vamos brincar de matematica!\n\n");
    printf("[1] Somar [2] Subtrair [3] Multiplicar [4] Dividir\n");
    printf("Entre com a opcao desejada -> ");
    scanf("%d", &op);
    
    printf("Entre com 2 inteiros x, y -> ");
    scanf("%d%d", &x, &y);
 
    if(op == 1) printf("\n[+] %d + %d = %d\n", x, y, x+y);
    else if(op == 2) printf("\n[-] %d - %d = %d\n", x, y, x-y);
    else if(op == 3) printf("\n[*] %d * %d = %d\n", x, y, x*y);
    else if(op == 4) printf("\n[/] %d / %d = %d\n", x, y, x/y);
    else printf("\nOpcao Invalida!\n");
    
    return 0;
}
