#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, resultado;

    printf("------------------------------Valor de um numero ao quadrado------------------------------\n\n");
    printf("Digite o valor de a: ");
    scanf("%i", &a);

    printf("Digite o valor de b: ");
    scanf("%i", &b);

    resultado = (a - b) * (a - b);

    printf("O quadrado da diferença entre a e b equivale a: %i\n", resultado);
    system("pause");

    return 0;
}

