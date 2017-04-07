/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um numero real. Se o número for positivo imprima a raiz quadrada.
* Do contrário, imprima o numero ao quadrado.
**************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void)
{
    float n;
    printf("Entre com n real -> ");
    scanf("%f", &n);
    
    (n > 0) ? printf("[+] Raiz quadrada -> %.1f\n", sqrt(n))
            : printf("[+] Ao quadrado -> %.1f\n", n*n);
    
    return 0;
}
