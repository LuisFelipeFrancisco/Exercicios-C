/*Leia um valor de área em hectares e apresente-o convertido em metros quadrados m². 
A fórmula de conversão é: M = H / 0,0001, sendo H a área em hectares e M a área em metros quadrados.*/

#include <stdio.h>

int main()
{
    float metros, hectares;
    printf("Digite a area em hectares: ");
    scanf("%f", &hectares);
    metros = hectares / 0.0001;
    printf("A area em metros quadrados e: %.2f\n", metros);
    return 0;
}