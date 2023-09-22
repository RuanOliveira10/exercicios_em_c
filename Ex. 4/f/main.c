#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,troca;

    printf("------------------------------Troca dos valores da variavel------------------------------\n\n");
    printf("Informe o primeiro valor denominado A: ");
    scanf("%i",&a);
    printf("Agora informe o segundo valor denominado B: ");
    scanf("%i",&b);

    troca = a;
    a = b;
    b = troca;


    printf("\nAgora o valor de A equivale a %i e o valor de B equivale a %i.\n\n",a,b);

    system("pause");
    return 0;
}
