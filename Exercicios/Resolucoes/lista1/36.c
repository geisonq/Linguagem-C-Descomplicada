/**************************************************************************
* Author: Lucas(heisen)
*
* Leia a altura e o raio de um cilindro circular e imprima o volume do 
* cilindro. O volume de um cilindro circular é calculado por meio da 
* seguinte fórmula: V = π * raio² * altura, onde π = 3.141592.
**************************************************************************/
#include <stdio.h>
#define PI 3.141592

int main(void)
{
    float raio, altura;
    printf("Entre com o raio e altura -> ");
    scanf("%f%f", &raio, &altura);

    printf("[+] Volume do cilindro -> %.2f\n", (float) PI * (raio*raio) * altura);
}
