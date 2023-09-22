#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float dolar,conversao_real;
    float const dolar_real = 4.93;

    printf("------------------------------Conversao de dolar para real------------------------------\n\n");
    printf("Digite o valor em dolares: ");
    scanf("%f", &dolar);

    conversao_real = dolar_real *dolar;

    printf("\nA conversao de US$ %.2f equivale a R$ %.2f.\n\n", dolar,conversao_real);
    system("pause");

    return 0;
}

