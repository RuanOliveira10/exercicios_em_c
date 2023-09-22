#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float sm,pr,ns;

    printf("------------------------------Valor do novo salario------------------------------\n\n");
    printf("Informe o seu salario mensal: ");
    scanf("%f",&sm);
    printf("Agora informe o percentual de reajuste: ");
    scanf("%f",&pr);

    ns = (sm*(pr/100))+sm;


    printf("\nO seu novo salario sera de R$ %.2f.\n\n",ns);
    system("pause");

    return 0;
}

