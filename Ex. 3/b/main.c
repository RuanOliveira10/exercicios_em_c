#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;

    printf("------------------------------Transformando negativo em positivo------------------------------\n\n");
    printf("Digite um numero inteiro: ");
    scanf("%i",&n);


    if (n<0){
        printf("O valor digitado eh negativo.\n");
        printf("aqui esta ele positivo: %i.\n\n",n*-1);
    }
    else{
        printf("O valor %i ja eh positivo.\n",n);
    }

    system("pause");
    return 0;
}
