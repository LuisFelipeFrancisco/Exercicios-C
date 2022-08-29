/* Leia  uma  temperatura  em  graus  Celsius  e  apresente-a  convertida  em  graus  Kelvin.  A 
fórmula  de  conversão  é:  K  =  C +  273.15,  sendo  C  a  temperatura  em  Celsiuse  K  a 
temperatura  em  Kelvin. */
#include <stdio.h>

int main()
{
    float c, k;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);
    k = c + 273.15;
    printf("A temperatura em Kelvin e: %.2f\n", k);
    return 0;
}