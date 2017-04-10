/**************************************************************************
* Author: Lucas(heisen)
*
* As tarifas de certo parque de estacionamento são as seguintes:
* > 1 a e 2 a hora - R$ 1,00 cada
* > 3 a e 4 a hora - R$ 1,40 cada
* > 5 a hora e seguintes - R$ 2,00 cada
* 
* O número de horas a pagar é sempre inteiro e arredondado por excesso. 
* Deste modo, quem estacionar durante 61 minutos pagará por duas horas, que 
* é o mesmo que pagaria se tivesse permanecido 120 minutos. Os momentos de 
* chegada ao parque e partida deste são apresentados na forma de pares de 
* inteiros, representando horas e minutos. Por exemplo, o par 12 50 
* representará “dez para a uma da tarde”. Pretende-se criar um programa 
* que, lidos pelo teclado os momentos de chegada e de partida, escreva na
* tela o preço cobrado pelo estacionamento. Admite-se que a chegada e a 
* partida se dão com intervalo não superior a 24 horas. Portanto, se uma 
* dada hora de chegada for superior à da partida, isso não é uma situação
* de erro, antes significará que a partida ocorreu no dia seguinte ao da 
* chegada.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    unsigned int horaChegada, horaSaida, minutoChegada, minutoSaida, diferenca;
    float preco = 0;

    printf("Entre com a hora de chegada e a hora de saida(**:** **:**) -> ");
    scanf("%d:%d %d:%d", &horaChegada, &minutoChegada, &horaSaida, &minutoSaida);

    int chegadaMinutos = (horaChegada*60) + minutoChegada, saidaMinutos = (horaSaida*60) + minutoSaida;

    diferenca = (horaChegada < horaSaida) ? saidaMinutos - chegadaMinutos : (1440 - chegadaMinutos + saidaMinutos);

    if(diferenca <= 60) preco = 1.0;
    else if(diferenca <= 120) preco = 2.0;
    else if(diferenca <= 180) preco = 3.40;
    else if(diferenca <= 240) preco = 4.80;
    else preco = (diferenca % 60 == 0) ? 4.80 + ((diferenca / 60) - 4) * 2.0 : 6.80 + ((diferenca / 60) - 4) * 2.0;

    printf("\nO carro ficou estacionado durante %d:%d\n", diferenca / 60, diferenca % 60);
    printf("Preco a pagar R$ %.2f\n", preco);
    
    return 0;
}
