#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    int a,b,c;
    float delta,x1,x2;

    setlocale(LC_ALL,"Portuguese");
    printf("----------Equação de Segundo Grau----------\n");
    printf("Informe o valor de A: ");
    scanf("%i",&a);
    printf("Informe o valor de B: ");
    scanf("%i",&b);
    printf("Informe o valor de C: ");
    scanf("%i",&c);

    delta = pow(b,2)-4*a*c;
    printf("\n\n-------------------------------------------\n");
    printf("A sua equação é : %ix² + %ix + %i = 0.\n",a,b,c);
    printf("Valor do delta é: %.2f.\n",delta);
    printf("-------------------------------------------\n\n");

    if (delta<0){
            printf("Não existem raízes reais para delta negativo.\n");
            printf("\n-------------------------------------------\n");
    }

    else{

        if(delta == 0){
            x1 = (-b+sqrt(delta))/(2*a);
            printf("Para delta igual a zero\ntemos duas raízes iguais a %.2f.\n",x1);
            printf("\n-------------------------------------------\n");
        }

        else{
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            printf("Para Delta positivo temos:\n\nx1 = %.2f\nx2 = %.2f\n",x1,x2);
            printf("\n-------------------------------------------\n");
            }
        }

    system("pause");
    return 0;
}
