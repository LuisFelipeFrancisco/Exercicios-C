/* Leia  um  ângulo  em  graus  e  apresente-o  convertido  em  radianos.  A  fórmula  de  conversão 
é:  R = G* π /180,  sendo  G  o  ângulo  em  graus  e  R  em  radianos  e  π  =  3.14. */

#include <stdio.h>

int main()
{
    float graus, radianos;
    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);
    radianos = graus * 3.14 / 180;
    printf("O angulo em radianos e: %.2f\n", radianos);
    return 0;
}