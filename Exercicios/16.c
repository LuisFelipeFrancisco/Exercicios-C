/* Leia  um  valor  de  comprimento  em  polegadas  e  apresente-o  convertido  em  centimetros. 
A  fórmula  de  conversão  é:  C  =  P  *  2,54,  sendo  C  o  comprimento  em  centimetros  e  P  o 
comprimento  em  polegadas. */ 

#include <stdio.h>

int main()
{
    float polegadas, centimetros;
    printf("Digite o comprimento em polegadas: ");
    scanf("%f", &polegadas);
    centimetros = polegadas * 2.54;
    printf("O comprimento em centimetros e: %.2f\n", centimetros);
    return 0;
}