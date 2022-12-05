/*Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.*/

#include <stdio.h>

int main()
{
    float real, cotacao;
    printf("Digite o valor em reais: ");
    scanf("%f", &real);
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);
    printf("O valor em dolares e: %.2f\n", real / cotacao);
    return 0;
}