/* Leia  uma  temperatura  em  graus  Fahrenheit  e  apresente-a  convertida  em  graus  Celsius. 
A  fórmula  de  conversão  é  C  =  5.0+(F —  32.0)/9.0,  sendo  C  a  temperatura  em  Celsius 
e  F  a  temperatura  em  Fahrenheit. */
#include <stdio.h>

int main()
{
    float f, c;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    c = 5.0 * (f - 32.0) / 9.0;
    printf("A temperatura em Celsius e: %.2f\n", c);
    return 0;
}