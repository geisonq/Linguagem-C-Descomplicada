/**************************************************************************
* Author: Lucas(heisen)
*
* Receba a altura do degrau de uma escada e a altura que o usuário deseja 
* alcançar subindo a escada. Calcule e mostre quantos degraus o usuário 
* deverá subir para atingir seu objetivo.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float alturaDegrau, alturaAlcancar;
    printf("Entre com a altura do degrau e altura que prentende alcancar -> ");
    scanf("%f%f", &alturaDegrau, &alturaAlcancar);
    
    printf("[+] Degrais a serem subidos -> %.0f\n", alturaAlcancar / alturaDegrau);
    
    return 0;
}
