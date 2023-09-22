#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,soma;

    printf("------------------------------Valor da soma dos quadrado de tres numeros------------------------------\n\n");
    printf("Digite o primeiro numero inteiro: ");
    scanf("%i",&a);
    printf("Digite o segundo numero inteiro: ");
    scanf("%i",&b);
    printf("Digite o terceiro numero inteiro: ");
    scanf("%i",&c);

    soma = pow(a,2)+ pow(b,2)+ pow(c,2);

    printf("\nA soma dos quadrados dos tres numeros equivale a %i.\n\n",soma);
    system("pause");

    return 0;
}

