#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float t,vm,distancia,litros_usados;

    printf("------------------------------Quantidade de litros de combustivel gasta em uma viagem------------------------------\n\n");
    printf("Informe o tempo gasto na viagem em horas: ");
    scanf("%f",&t);
    printf("Agora informe a velocidade media na viagem: ");
    scanf("%f",&vm);


    distancia = t*vm;
    litros_usados= distancia/ 12;

    printf("\nO carro durante a viagem em uma velocidade media igual a %.2f Km/h levando um tempo de %.2f horas. Percorreu uma distancia de %.2f Km e gastou %.2f L para chegar ao destino. \n\n",vm,t,distancia,litros_usados);

    system("pause");
    return 0;
}
