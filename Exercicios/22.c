/*Leia  um valor  de  comprimento  em  jardas  e  apresente-o  convertido  em  metros.  A  fórmula 
de  conversão  é:  M  =  0,91 * J,  sendo  J  o  comprimento  em  jardas  e  M  o  comprimento 
em  metros.*/

#include <stdio.h>

int main()
{
    float metros, jardas;
    printf("Digite o comprimento em jardas: ");
    scanf("%f", &jardas);
    metros = 0.91 * jardas;
    printf("O comprimento em metros e: %.2f\n", metros);
    return 0;
}