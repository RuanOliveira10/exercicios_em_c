#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1,n2,n3,n4,md;

    printf("------------------------------Medias escolares------------------------------\n\n");
    printf("Digite sua n1: ");
    scanf("%f",&n1);
    printf("Digite sua n2: ");
    scanf("%f",&n2);
    printf("Digite sua n3: ");
    scanf("%f",&n3);
    printf("Digite sua n4: ");
    scanf("%f",&n4);

    md = (n1+n2+n3+n4)/4;

    if (md>=5){
        printf("\nVoce foi aprovado.\n");
        printf("A sua media final foi: %.2f.\n\n",md);
    }
    else{
        printf("\nVoce foi reprovado.\n");
        printf("A sua media final foi: %.2f.\n\n",md);
    }

    system("pause");
    return 0;
}
