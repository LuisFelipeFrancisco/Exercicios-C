/* Leia  uma  temperatura  em  graus  Kelvin  e  apresente-a  convertida  em  graus  Celsius.  A 
fórmula  de  conversão  é:  C  =  K  —  273.15,  sendo  C  a  temperatura  em  Celsiuse  K  a 
temperatura  em  Kelvin. */
#include <stdio.h>

int main()
{
    float k, c;
    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &k);
    c = k - 273.15;
    printf("%.2f\n", c);
    return 0;
}