/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa que receba dois números e mostre qual deles é o maior.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Entre com dois inteiros -> ");
    scanf("%d%d", &x, &y);
    
    (x > y) ? printf("[+] %d eh o maior\n", x) 
            : printf("[+] %d eh o maior\n", y);
    
    return 0;
}
