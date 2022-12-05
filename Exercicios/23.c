/*Leia  um  valor  de  comprimento  em  metros  e  apresente-o  convertido  em  jardas.  
A  fórmula  de  conversão  é:  J  =  M / 0,91 
sendo  J  o  comprimento  em  jardas  e  M  o  comprimento  em  metros.*/

#include <stdio.h>

int main()
{
    float metros, jardas;
    printf("Digite o comprimento em metros: ");
    scanf("%f", &metros);
    jardas = metros / 0.91;
    printf("O comprimento em jardas e: %.2f\n", jardas);
    return 0;
}