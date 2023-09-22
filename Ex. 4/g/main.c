#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,d,adicao,multiplicacao;

    printf("------------------------------Adicao e multiplicacao de quatro numeros------------------------------\n\n");
    printf("Informe o valor denominado A: ");
    scanf("%i",&a);
    printf("Informe o valor denominado B: ");
    scanf("%i",&b);
    printf("Informe o valor denominado C: ");
    scanf("%i",&c);
    printf("Agora informe o valor denominado D: ");
    scanf("%i",&d);

    adicao = (a+b)+(a+c)+(a+d)+(b+c)+(b+d)+(c+d);
    multiplicacao = (a*b)+(a*c)+(a*d)+(b*c)+(b*d)+(c*d);


    printf("\nTotal da adicao: %i.",adicao);
    printf("\nTotal da multiplicacao: %i.",multiplicacao);
    printf("\nTotal da soma entre adicao e multiplicao: %i.\n\n",adicao+multiplicacao);

    system("pause");
    return 0;
}
