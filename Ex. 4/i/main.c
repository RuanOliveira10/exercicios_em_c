#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num,quadrado;

    printf("------------------------------Valor de um numero ao quadrado------------------------------\n\n");
    printf("Digite um numero para saber quanto ele equivale ao quadrado: ");
    scanf("%i",&num);

    quadrado = pow(num,2);

    printf("\nO numero %i ao quadrado equivale a %i.\n\n",num,quadrado);

    system("pause");
    return 0;
}
