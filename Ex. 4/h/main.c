#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float volume,comprimento,largura,altura;

    printf("------------------------------Volume de uma caixa retangular------------------------------\n\n");
    printf("Informe o comprimento da caixa retangular: ");
    scanf("%f",&comprimento);
    printf("Informe a largura: ");
    scanf("%f",&largura);
    printf("Agora informe a altura: ");
    scanf("%f",&altura);

    volume = comprimento*largura*altura;


    printf("\nO volume dessa caixa retangular equivale a %.2f\n\n",volume);

    system("pause");
    return 0;
}
