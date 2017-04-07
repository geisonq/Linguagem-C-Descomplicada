/**************************************************************************
* Author: Lucas(heisen)
*
* Dados três valores, A, B, C, verificar se eles podem ser valores dos 
* lados de um triângulo e, se forem, se é um triângulo escaleno, equilátero 
* ou isóscele, considerando os seguintes conceitos:
* > O comprimento de cada lado de um triângulo é menor do que a soma dos 
*        outros dois lados.
* > Chama-se equilátero o triângulo que tem três lados iguais.
* > Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
* > Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float a, b, c;
    printf("Entre com os lados a, b e c -> ");
    scanf("%f%f%f", &a, &b, &c);
    
    if((a+b > c && a+c > b && b+c > a))
    {
        if(a == b && b == c) printf("[+] Equilatero\n");
        else if(a != b && b != c) printf("[+] Escaleno\n");
        else printf("[+] Isoceles\n");
    }
    else printf("As medidas nao formam um triangulo\n");
    
    return 0;
}
