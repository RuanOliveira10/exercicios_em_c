#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b;

    printf("------------------------------Diferenca do maior valor pelo menor------------------------------\n\n");
    printf("Informe o primeiro valor: ");
    scanf("%i",&a);
    printf("Informe o segundo valor: ");
    scanf("%i",&b);

    if (a>b){
        printf("O primeiro valor e o maior.\n");
        printf("E a diferenca sera de %i.\n\n",a-b);
    }
    else if (a<b){
        printf("O segundo valor e o maior.\n");
        printf("E a diferenca sera de %i.\n\n",b-a);
    }
    else{
        printf("Os valores sao iguais.\n\n");
    }

    system("pause");
    return 0;
}
