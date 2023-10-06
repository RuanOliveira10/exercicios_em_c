#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int golUTD,golCity,dif;

    setlocale(LC_ALL, "Portuguese");
    printf("Manchester UTD X Manchester City\n");
    printf("----------------------------------\n");
    printf("Quantos gols do UTD? ");
    scanf("%i",&golUTD);
    printf("Quantos gols do City? ");
    scanf("%i",&golCity);
    printf("----------------------------------\n");

    dif = golUTD - golCity;

    if (dif < 0){
        dif = dif * -1;
        printf("DIFERENÇA: %i GOLS\n",dif);
    }
    else{
        printf("DIFERENÇA: %i GOLS\n",dif);
    }

    switch(dif){

        case 0:
            printf("STATUS: EMPATE\n");
            printf("----------------------------------\n");
            break;

        case 1:
        case 2:
        case 3:
            printf("STATUS: PARTIDA NORMAL\n");
            printf("----------------------------------\n");
            break;

        default:
            printf("STATUS: GOLEADA\n");
            printf("----------------------------------\n");
            break;
    }

    system("pause");
    return 0;
}
