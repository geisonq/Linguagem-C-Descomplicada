/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
* (basemaior + basemenor) * altura / 2
* Lembre-se a base maior e a base menor devem ser números maiores que zero.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float baseMenor, baseMaior, altura;
    printf("Entre com a baseMenor, baseMenor e a altura -> ");
    scanf("%f%f%f", &baseMaior, &baseMenor, &altura);
    
    (baseMaior > 0 && baseMenor > 0) ? printf("[+] Area do trapézio -> %.2f\n", (baseMaior + baseMenor) * altura / 2)
                                     : printf("As bases devem ser maiores que zero\n");
    
    return 0;
}
