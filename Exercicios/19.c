/* Leia  um  valor  de  volume  em  litros  e  apresente-o  convertido  em  metros  cubicos  m”.  À 
fórmula  de  conversão  é:  M  =  L / 1000  sendo  L  o  volume  em  litros  e  M  o  volume  em  metros 
cubicos. */

#include <stdio.h>

int main()
{
    float litros, metros;
    printf("Digite o volume em litros: ");
    scanf("%f", &litros);
    metros = litros / 1000;
    printf("O volume em metros cubicos e: %.2f\n", metros);
    return 0;
}