/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um algoritmo que calcule o IM C de uma pessoa e mostre sua 
* classificação de acordo com a tabela abaixo:
*
* |     IMC      |        Classificação        |
* |--------------|-----------------------------|
* | < 18,5       | Abaixo do Peso              |
* | 18 - 24,9    | Saudável                    |
* | 25,0 - 29,9  | Peso em excesso             |
* | 30,0 - 34,9  | Obesidade Grau I            |
* | 35,00 - 39,9 | Obesidade Grau II(severa)   |
* | > 40         | Obesidade Grau III(mórbida) |
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float p, a;
    printf("Entre com o peso(kg) e a altura(m) ex(80 1.70)-> ");
    scanf("%f%f", &p, &a);
    
    float imc = p / (a * a);
    
    if(imc < 18.5) printf("IMC -> %.1f\nAbaixo do Peso\n", imc);
    else if(imc < 24.9) printf("IMC -> %.1f\nSaudavel\n", imc);
    else if(imc < 29.9) printf("IMC -> %.1f\nPeso em excesso\n", imc);
    else if(imc < 34.9) printf("IMC -> %.1f\nObesidade Grau I\n", imc);
    else if(imc < 39.9) printf("IMC -> %.1f\nObesidade Grau II(severa)\n", imc);
    else printf("IMC -> %.1f\nObesidade Grau III(morbida)\n", imc);
    
    return 0;
}
