/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um valor de área em metros quadrados m² e apresente-o convertido 
* em hectares. A fórmula de conversão é: H = M ∗ 0, 0001, sendo M a área 
* em metros quadrados e H a área em hectares.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float mq;
    printf("Metros quadrados -> ");
    scanf("%f", &mq);

    printf("Hectares -: %f \n", mq*0.0001);
    
    return 0;
}
