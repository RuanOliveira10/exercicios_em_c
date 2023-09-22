#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float volume,raio,altura;
    const pi = 3.14159;

    printf("----------------------------------------Volume de uma lata de oleo----------------------------------------\n");
    printf("Digite o raio da lata de oleo: ");
    scanf("%f",&raio);
    printf("Agora digite a altura da lata de oleo: ");
    scanf("%f",&altura);


    volume = pi * pow(raio,2)*altura;

    printf("\nO volume da lata equivale a %.2f.\n\n",volume);

    system("pause");
    return 0;
}
