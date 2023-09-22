#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,f;

    printf("----------------------------------------Conversao de Fahrenheit para Celsius----------------------------------------\n");
    printf("Digite uma temperatura em graus Fahrenheit: ");
    scanf("%f",&f);

    c = ((f-32)*5)/9;

    printf("\n%.2f graus Fahrenheit equivale a %.2f graus Celsius.\n\n",f,c);

    system("pause");
    return 0;
}
