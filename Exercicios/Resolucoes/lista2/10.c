/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa que receba a altura e o sexo de uma pessoa e calcule e 
* mostre seu peso ideal, utilizando as seguintes fórmulas 
* (onde h corresponde à altura): 
* -> Homens: (72.7 * h) − 58
* -> Mulheres: (62.1 * h) − 44.7
**************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    float h; char s[1];
    printf("Entre com o sexo(f ou m) -> ");
    scanf("%s", s);
    printf("Entre com a altura -> ");
    scanf("%f", &h);

    (strcmp(s, "f") == 0) ? printf("[+] Peso ideal -> %.2f\n", (62.1*h)-44.7)
                          : printf("[+] Peso ideal -> %.2f\n", (72.7*h)-58);

    return 0;
}
