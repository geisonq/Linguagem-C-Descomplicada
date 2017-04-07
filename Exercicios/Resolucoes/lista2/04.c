/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa que leia um número e, caso ele seja positivo, calcule e 
* mostre:
* -> O número digitado ao quadrado
* -> A raiz quadrada do número digitado
**************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    printf("Entre com n -> ");
    scanf("%d", &n);
    
    if(n > 0) {
        printf("[+] Ao quadrado -> %d\n", n*n);
        printf("[+] Raiz quadrada -> %.1f\n", sqrt(n));
    }
    
    return 0;
}
