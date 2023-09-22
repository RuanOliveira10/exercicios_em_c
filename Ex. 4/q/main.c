#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,r;
    const float pi = 3.14159265;

    printf("------------------------------Valor da area de uma circunferencia------------------------------\n\n");
    printf("Informe o raio da circunferencia: ");
    scanf("%f",&r);

    a = pi*pow(r,2);


    printf("\nA area da circunferencia equivale a %.2f metros.\n\n",a);
    system("pause");

    return 0;
}

