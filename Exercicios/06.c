/* Leia  uma  temperatura  em  graus  Celsius  e  apresente-a  convertida  em  graus  Fahrenheit. 
A  fórmula  de  conversão  é:  F  =  C =(9.0/5.0)+32.0,  sendo  F  atemperatura  em  Fahrenheit 
e  C  a  temperatura  em  Celsius. */
#include <stdio.h>

int main()
{
    float c, f;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);
    f = c*(9.0/5.0)+32.0;
    printf("%.2f\n", f);
    return 0;
}