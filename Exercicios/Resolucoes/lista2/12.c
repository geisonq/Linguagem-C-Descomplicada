/**************************************************************************
* Author: Lucas(heisen)
*
* Ler um número inteiro. Se o número lido for negativo, escreva a mensagem 
* “Número inválido”. Se o número for positivo, calcular o logaritmo deste 
* numero.
**************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    printf("Entre com um numero -> ");
    scanf("%d", &n);

    (n > 0) ? printf("[+] Logaritomo -> %.2f\n", log(n)) 
            : printf("Numero invalido\n");

    return 0;
}
