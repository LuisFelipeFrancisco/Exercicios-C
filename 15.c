/* Leia  um  ângulo  em  radianos  e  apresente-o  convertido  em  graus.  A  fórmula  de  conversão 
é  G  =  R *  180/π,  sendo  G  o  ângulo  em  graus  e  R  em  radianos  e  π  =  3.14. */

#include <stdio.h>

int main()
{
    float radianos, graus;
    printf("Digite o angulo em radianos: ");
    scanf("%f", &radianos);
    graus = radianos * 180 / 3.14;
    printf("O angulo em graus e: %.2f\n", graus);
    return 0;
}