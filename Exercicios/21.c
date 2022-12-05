/* Leia  um  valor  de  massa  em  libras  e  apresente-o  convertido  em  quilogramas.  A  fórmula 
de  conversão  é:  K  =  L * 0.453592,  sendo  K  a  massa  em  quilogramas  e  L  a  massa  em  libras. */

#include <stdio.h>

int main()
{
    float quilogramas, libras;
    printf("Digite a massa em libras: ");
    scanf("%f", &libras);
    quilogramas = libras * 0.453592;
    printf("A massa em quilogramas e: %.2f\n", quilogramas);
    return 0;
}