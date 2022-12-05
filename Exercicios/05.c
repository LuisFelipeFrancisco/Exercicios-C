/* Leia  um  número  real  e  imprima  a  quinta  parte  deste  número. */
#include<stdio.h>

int main (){
    float num;
    printf("Digite um numero real: ");
    scanf("%f", &num);
    printf("A quinta parte de %f e = %f", num,num/5);
    return 0;
}