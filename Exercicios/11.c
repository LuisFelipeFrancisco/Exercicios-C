/* Leia  uma  velocidade  em  m/s  (metros  por  segundo)  e  apresente-a  convertida  em  km/h 
(quilômetros  por  hora).  A  fórmula  de  conversão  é:  K  =  M  * 3.6,  sendo  K  a  velocidade 
em  km/he  M  em  m/s. */

#include <stdio.h>

int main()
{
    float velocidade, velocidade_kmh;
    printf("Digite a velocidade em m/s: ");
    scanf("%f", &velocidade);
    velocidade_kmh = velocidade * 3.6;
    printf("Velocidade convertida em km/h: %.2f\n", velocidade_kmh);
    return 0;
}