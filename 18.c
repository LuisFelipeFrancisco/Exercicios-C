/* Leia  um  valor  de  volume  em  metros  cúbicos  m³  e  apresente-o  convertido  em  litros.  A 
fórmula  de  conversão  é:  L  =  1000  *  M,  sendo  L  o  volume  em  litros  e  M  o  volume  em 
metros  cúbicos. */

#include <stdio.h>

int main()
{
    float metros, litros;
    printf("Digite o volume em metros cúbicos: ");
    scanf("%f", &metros);
    litros = 1000 * metros;
    printf("O volume em litros e: %.2f\n", litros);
    return 0;
}