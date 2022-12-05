/*Leia um valor de área em metros quadrados m² e apresente-o convertido em hectares. 
A fórmula de conversão é: H = M * 0,0001, sendo H a área em hectares e M a área em metros quadrados.*/

#include <stdio.h>

int main()
{
    float metros, hectares;
    printf("Digite a area em metros quadrados: ");
    scanf("%f", &metros);
    hectares = metros * 0.0001;
    printf("A area em hectares e: %.2f\n", hectares);
    return 0;
}