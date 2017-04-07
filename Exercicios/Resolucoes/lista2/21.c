/**************************************************************************
* Author: Lucas(heisen)
*
* Escreva o menu de opções abaixo. Leia a opção do usuário e execute a 
* operação escolhida. Escreva uma mensagem de erro se a opção for inválida.
* Escolha a opção:
* 1- Soma de 2 números.
* 2- Diferença entre 2 números (maior pelo menor).
* 3- Produto entre 2 números.
* 4- Divisão entre 2 números (o denominador não pode ser zero).
* Opção -> 
**************************************************************************/
#include <stdio.h>

int main(void)
{
    unsigned int op;
    printf("Escolha a opcao:\n");
    printf("1- Soma de 2 números.\n");
    printf("2- Diferença entre 2 números (maior pelo menor).\n");
    printf("3- Produto entre 2 números.\n");
    printf("4- Divisão entre 2 números (o denominador não pode ser zero).\n");
    printf("Opção -> ");
    scanf("%d", &op);
    
    int x, y;
    printf("Entre com x e y -> ");
    scanf("%d%d", &x, &y);
    
    switch(op)
    {
        case 1:
            printf("[+] Soma -> %d\n", x+y);
            break;
        case 2:
            (x > y) ? printf("[-] Diferenca -> %d\n", x-y) : printf("[-] Diferenca -> %d\n", y-x);
            break;
        case 3:
            printf("[*] Produto -> %d\n", x*y);
            break;
        case 4:
            (y != 0) ? printf("[/] Divisao -> %.2f\n", (float)x/y) : printf("O denominador nao pode ser 0\n");
            break;
        default:
            printf("Opção invalida\n");
    }
    
    return 0;
}
