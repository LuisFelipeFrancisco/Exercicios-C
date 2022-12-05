/* Leia  um  valor  de  massa  em  quilogramas  e  apresente-o  convertido  em  libras.  A  fórmula 
de  conversão  é:  L  =  K / 0,45,  sendo  K  a  massa  em  quilogramas  e  L  a  massa  em  libras.
*/
#include <stdio.h>

int main()
{
    float quilogramas, libras;
    printf("Digite a massa em quilogramas: ");
    scanf("%f", &quilogramas);
    libras = quilogramas / 0.45;
    printf("A massa em libras e: %.2f\n", libras);
    return 0;
}