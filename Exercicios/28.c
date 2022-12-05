/*Faça a leitura de três valores e apresente a soma dos quadrados dos três valores lidos.*/

#include <stdio.h>

int main()
{
    int a, b, c, soma;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);
    soma = a * a + b * b + c * c;
    printf("A soma dos quadrados dos tres valores e: %d\n", soma);
    return 0;
}