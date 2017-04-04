/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um valor inteiro em segundos, e imprima-o em horas, minutos e 
* segundos.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int s;
    printf("Entre com os segundos -> ");
    scanf("%d", &s);

    int m = s / 60, h = m / 60;
    m %= 60; s %= 60;
    
    printf("[+] %d hora %d minuto(s) %d segundo(s)\n", h, m, s);
    
    return 0;
}
