/*Leia um valor de área em metros quadrados m² e apresente-o convertido em acres. 
A fórmula de conversão é: A = M * 0,000247, sendo A a área em acres e M a área em metros quadrados.*/

#include <stdio.h>

int main()
{
    float metros, acres;
    printf("Digite a area em metros quadrados: ");
    scanf("%f", &metros);
    acres = metros * 0.000247;
    printf("A area em acres e: %.2f\n", acres);
    return 0;
}