/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um valor de área em metros quadrados m² e apresente-o convertido 
* em acres. A fórmula de conversão é: A = M ∗ 0, 00024710538146717, sendo 
* M a área em metros quadrados e A a área em acres.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    double mq;
    printf("Metros quadrados -> ");
    scanf("%la", &mq);

    printf("Acres -: %.14la\n", mq*.00024710538146717);
    
    return 0;
}
