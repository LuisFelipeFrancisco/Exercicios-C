/* Leia  uma  distância  em  milhas  e  apresente-a  convertida  em  quilômetros.  A  fórmula  de 
conversão  é:  K  =  1,61  M,  sendo  K  a  distância  em  quilômetros  e  M  em  milhas.  */

#include <stdio.h>

int main()
{
    float milhas, quilometros;
    printf("Digite a distancia em milhas: ");
    scanf("%f", &milhas);
    quilometros = milhas * 1.61;
    printf("A distancia em quilometros e: %.2f\n", quilometros);
    return 0;
}