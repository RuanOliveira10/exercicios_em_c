#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float valor,prestacao,taxa;
    int tempo;

    printf("------------------------------Valor de uma prestacao de um bem em atraso------------------------------\n\n");
    printf("Informe o valor que deve ser pago: ");
    scanf("%f",&valor);
    printf("Informe o tempo de atraso em meses: ");
    scanf("%i",&tempo);
    printf("Agora informe a taxa de atraso: ");
    scanf("%f",&taxa);


    prestacao = valor+(valor*(taxa/100)*tempo);

    printf("\nO valor da prestacao do bem atrasado sera de %.2f reais.\n\n",prestacao);

    system("pause");
    return 0;
}
