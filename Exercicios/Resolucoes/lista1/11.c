/**************************************************************************
* Author: Lucas(heisen)
*
* Leia uma velocidade em m/s (metros por segundo) e apresente-a 
* convertida em km/h (quilômetros por hora). A fórmula de conversão é: 
* K = M ∗ 3.6, sendo K a velocidade em km/h e M em m/s.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float ms;
    printf("Velocidade em m/s -> ");
    scanf("%f", &ms);

    printf("Velocidade em km/h -: %.4f\n", ms*3.6);
    
    return 0;
}
