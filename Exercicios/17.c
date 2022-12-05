/* Leia  um  valor  de  comprimento  em  centimetros  e  apresente-o  convertido  em  polegadas. 
A  fórmula  de  conversão  é:  P  =  C / 2,54  sendo  C  o  comprimento  em  centímetros  e  P  o 
comprimento  em  polegadas. */

#include <stdio.h>

int main()
{
    float centimetros, polegadas;
    printf("Digite o comprimento em centimetros: ");
    scanf("%f", &centimetros);
    polegadas = centimetros / 2.54;
    printf("O comprimento em polegadas e: %.2f\n", polegadas);
    return 0;
}