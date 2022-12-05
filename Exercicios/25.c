/*Leia um valor de área em acres e apresente-o convertido em metros quadrados m². 
A fórmula de conversão é: M = A / 0,000247, sendo A a área em acres e M a área em metros quadrados.*/

#include <stdio.h>

int main()
{
    float acres, metros;
    printf("Digite o comprimento em acres: ");
    scanf("%f", &acres);
    metros = acres / 0.000247;
    printf("O comprimento em metros quadrados e: %.2f\n", metros);
    return 0;
}