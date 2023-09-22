#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,f;

    printf("----------------------------------------Conversao de Celsius para Fahrenheit----------------------------------------\n");
    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f",&c);

    f = (c*9)/5+32;

    printf("\n%.2f graus Celsius equivale a %.2f graus Fahrenheit.\n\n",c,f);

    system("pause");
    return 0;
}
