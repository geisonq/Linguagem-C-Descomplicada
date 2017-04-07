/**************************************************************************
* Author: Lucas(heisen)
*
* Escreva um programa que leia um número inteiro maior do que zero e 
* devolva, na tela, a soma de todos os seus algarismos. Por exemplo, ao 
* número 251 corresponderá o valor 8 (2 + 5 + 1). Se o número lido não for 
* maior do que zero, o programa terminará com a mensagem “Número inválido”.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int n, sum;
    printf("Entre com n maior que 0 -> ");
    scanf("%d", &n);

    if(n != 0)
    {
        while(n != 0)
        {        
            sum += n%10;
            n /= 10;
        }

        printf("[+] Soma -> %d\n", sum);
    }
    else printf("Numero invalido\n");

    return 0;
}
