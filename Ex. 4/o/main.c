#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,d,p,s;

    printf("------------------------------Valor da soma e do produto------------------------------\n\n");
    printf("Digite o primeiro numero inteiro: ");
    scanf("%i",&a);
    printf("Digite o segundo numero inteiro: ");
    scanf("%i",&b);
    printf("Digite o terceiro numero inteiro: ");
    scanf("%i",&c);
    printf("Digite o quarto numero inteiro: ");
    scanf("%i",&d);

    p = a*c;
    s = b+d;


    printf("\nO produto entre o primeiro e o terceiro numero equivale a %i e a soma entre o segundo e o quarto numero equivale a %i.\n\n",p,s);
    system("pause");

    return 0;
}

