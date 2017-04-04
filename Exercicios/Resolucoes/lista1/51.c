/**************************************************************************
* Author: Lucas(heisen)
*
* Escreva um programa que leia as coordenadas x e y de pontos no R² e 
* calcule sua distância da origem (0, 0).
**************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, y;
    printf("Entre com as coordenadas x, y -> ");
    scanf("%d%d", &x, &y);

    printf("[+] Distancia -> %.2f\n", sqrt(pow(x,2)+pow(y,2)));
    
    return 0;
}
