/**************************************************************************
* Author: Lucas(heisen)
*
* Leia o valor do raio de um cı́rculo e calcule e imprima a área do cı́rculo 
* correspondente. A área do cı́rculo é π ∗ raio 2 , considere π = 3.141592.
**************************************************************************/
#include <stdio.h>
#define PI 3.141592

int main(void)
{
    int r;
    printf("Entre com o raio -> ");
    scanf("%d", &r);

    printf("[+] Area -> %.2f\n", (float) PI * (r * r));
    
    return 0;
}
