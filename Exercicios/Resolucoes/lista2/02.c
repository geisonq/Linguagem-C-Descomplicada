/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um número fornecido pelo usuário. Se esse número for positivo, 
* calcule a raiz quadrada do número. Se o número for negativo, mostre uma 
* mensagem dizendo que o número é inválido.
**************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void)
{
    float n;
    printf("Entre com n -> ");
    scanf("%f", &n);

    (n > 1) ? printf("[+] raiz Quadrada -> %.1f\n", sqrt(n)) 
            : printf("Numero inválido\n");

    return 0;
}
