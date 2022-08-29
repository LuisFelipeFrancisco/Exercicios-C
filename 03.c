/* Peça  ao  usuário  para  digitar  três  valores  inteiros  e  imprima  a  soma deles. */
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d\n", num1 + num2 + num3);
    return 0;
}