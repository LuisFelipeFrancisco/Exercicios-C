/* Leia  um  valor  de  volume  em  litros  e  apresente-o  convertido  em  metros  cúbicos  m”.  À 
fórmula  de  conversão  é:  M  =  L / 1000  sendo  L  o  volume  em  litros  e  M  o  volume  em  metros 
cúbicos. */

#include <stdio.h>

int main()
{
    float litros, metros;
    printf("Digite o volume em litros: ");
    scanf("%f", &litros);
    metros = litros / 1000;
    printf("O volume em metros cúbicos e: %.2f\n", metros);
    return 0;
}