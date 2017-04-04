/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa para ler as dimensões de um terreno 
* (comprimento c e largura l), bem como o preço do metro de tela p. Imprima
* o custo para cercar este mesmo terreno com tela.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float c, l, p;
    printf("Entre com comprimento e lado -> ");
    scanf("%f%f", &c, &l);
    printf("Entre com o preco do metro de tela -> ");
    scanf("%f", &p);
    
    printf("[+] Custo para cercar -> %.0f\n", c * l * p);
    
    return 0;
}
