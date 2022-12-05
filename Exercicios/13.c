/* Leia  uma  distância  em  quilômetros  e  apresente-a  convertida  em  milhas.  A  fórmula  de 
conversão  é:  M  = K/1,61 Tão  sendo  K  a  distância  em  quilômetros  e  M  em  milhas. */
#include <stdio.h>

int main()
{
    float quilometros, milhas;
    printf("Digite a distancia em quilometros: ");
    scanf("%f", &quilometros);
    milhas = quilometros / 1.61;
    printf("A distancia em milhas e: %.2f\n", milhas);
    return 0;
}