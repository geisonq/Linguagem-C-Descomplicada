/**************************************************************************
* Author: Lucas(heisen)
*
* Uma empresa decide dar um aumento aos seus funcionários de acordo com uma
* tabela que considera o salário atual e o tempo de serviço de cada 
* funcionário. Os funcionários com menor salário terão um aumento 
* proporcionalmente maior do que os funcionários com um salário maior, e 
* conforme o tempo de serviço na empresa, cada funcionário irá receber um 
* bônus adicional de salário. Faça um programa que leia:
* > o valor do salário atual do funcionário;
* > o tempo de serviço desse funcionário na empresa (número de anos de 
*    trabalho na empresa).
* Use as tabelas abaixo para calcular o salário reajustado deste funcionário 
* e imprima o valor do salário final reajustado, ou uma mensagem caso o 
* funcionário não tenha direito a nenhum aumento.
*
* |  Salário Atual   | Reajuste(%)  | Tempo de Serviço |   Bônus   |
* |------------------|--------------|------------------|-----------|
* | Até 500,00       | 25%          | Abaixo de 1 ano  | Sem bônus |
* | Até 1000,00      | 20%          | De 1 a 3 anos    | 100,00    |
* | Até 1500,00      | 15%          | De 4 a 6 anos    | 200,00    |
* | Até 2000,00      | 10%          | De 7 a 10 anos   | 300,00    |
* | Acima de 2000,00 | Sem reajuste | Mais de 10 anos  | 500,00    |
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float vs, ns;
    unsigned int ts;
    printf("Entre com o salario e com o tempo de servico -> ");
    scanf("%f%d", &vs, &ts);
    
    if(vs < 500.00) ns = vs + (vs * 0.25);
    else if(vs < 1000.00) ns = vs + (vs * 0.20);
    else if(vs < 1500.00) ns = vs + (vs * 0.15);
    else if(vs < 2000.00) ns = vs + (vs * 0.10);
    else printf("Sem reajuste\n");
    
    if(ts < 1)
    {        
        printf("Sem bonus\n");
        printf("Salario Reajustado %.2f\n", ns);
    }
    else if(ts <= 3) printf("Salario Reajustado -> %.2f\n", ns += 100);
    else if(ts <= 6) printf("Salario Reajustado -> %.2f\n", ns += 200);
    else if(ts <= 10) printf("Salario Reajustado -> %.2f\n", ns += 300);
    else printf("Salario reajustado -> %.2f\n", ns += 500);
    
    return 0;
}
