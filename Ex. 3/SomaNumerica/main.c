#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");

    int i=1,qtd_num,soma=0,numeros,maior,menor;

    printf("-------------------------------------\n");
    printf("Voc� deseja somar quantos n�meros? ");
    scanf("%i",&qtd_num);
    printf("-------------------------------------\n");


    do{
        printf("Digite o %i o. n�mero: ",i);
        scanf("%i",&numeros);

        if (numeros > maior){
            maior = numeros;
        }

        else
            if (numeros < menor){
                menor = numeros;
        }

        i++;
        soma = soma + numeros;
    }while(i <= qtd_num);

    printf("\n\nA soma de todos os \nn�meros digitados � de: %i\n",soma);
    printf("-------------------------------------\n");
    printf("O maior n�mero digitado foi o: %i\n",maior);
    printf("O menor n�mero digitado foi o: %i\n",menor);
    printf("-------------------------------------\n");


    system("pause");
    return 0;
}
