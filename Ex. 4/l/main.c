#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float reais,conversao_dolar;
    float const real_dolar = 0.20;

    printf("------------------------------Conversao de real para dolar------------------------------\n\n");
    printf("Digite o valor em reais: ");
    scanf("%f", &reais);

    conversao_dolar = real_dolar *reais;

    printf("\nA conversao de R$ %.2f equivale a US$ %.2f.\n\n",reais, conversao_dolar);
    system("pause");

    return 0;
}

