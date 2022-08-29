/* Leia  um  número  real  e  imprima  o  resultado  do  quadrado  desse  número. */
#include<stdio.h>

int main (){
    float num;
    printf("Digite um numero real: ");
    scanf("%f", &num);
    printf("%f ao quadrado = %f", num,num*num);
    return 0;
}