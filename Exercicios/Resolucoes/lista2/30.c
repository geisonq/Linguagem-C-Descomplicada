/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa que receba três números e mostre-os em ordem crescente
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int x, y, z;
    printf("Entre com tres numeros -> ");
    scanf("%d%d%d", &x, &y, &z);
    
    if(x < y && x < z)  
        (z < y) ? printf("%d %d %d\n", x, z, y) : printf("%d %d %d\n", x, y, z);
    else if(y < x && y < z)
        (x < z) ? printf("%d %d %d\n", y, x, z) : printf("%d %d %d\n", y, z, x);
    else
        (y < x) ? printf("%d %d %d\n", z, y, x) : printf("%d %d %d\n", z, x, y);
    
    return 0;
}
