#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int inicio,fim,i;

    setlocale(LC_ALL,"Portuguese");
    printf("----------------------------\n");
    printf("CONTAGEM INTELIGENTE\n");
    printf("----------------------------\n");
    printf("Início da contagem: ");
    scanf("%i",&inicio);
    printf("Fim da contagem: ");
    scanf("%i",&fim);
    printf("----------------------------\n");

    i = inicio;

    if (inicio < fim){
        printf("CONTAGEM PROGRESSIVA\n");
        do{

            printf("%i..  \n",i);
            i++;
        }while(i <= fim);
}

    else if(inicio > fim){
            printf("CONTAGEM REGRESSIVA\n");
            do{

                printf("%i..  \n",i);
                i--;
        }while(i >= fim);
    }

    printf("----------------------------\n");
    system("pause");
    return 0;
}
