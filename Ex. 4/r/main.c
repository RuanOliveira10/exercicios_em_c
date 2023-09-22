#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int votosA, votosB, votosC, votosNulos, votosBranco, totalEleitores;
    float percentValidos, percentA, percentB, percentC, percentNulos, percentBranco;

    printf("------------------------------Eleicoes sindicais------------------------------\n\n");
    printf("Digite a quantidade de votos para o candidato A: ");
    scanf("%i", &votosA);

    printf("Digite a quantidade de votos para o candidato B: ");
    scanf("%i", &votosB);

    printf("Digite a quantidade de votos para o candidato C: ");
    scanf("%i", &votosC);

    printf("Digite a quantidade de votos nulos: ");
    scanf("%i", &votosNulos);

    printf("Digite a quantidade de votos em branco: ");
    scanf("%i", &votosBranco);

    totalEleitores = votosA + votosB + votosC + votosNulos + votosBranco;

    percentValidos = ((float)(votosA + votosB + votosC) / totalEleitores) * 100;
    percentA = ((float)votosA / totalEleitores) * 100;
    percentB = ((float)votosB / totalEleitores) * 100;
    percentC = ((float)votosC / totalEleitores) * 100;
    percentNulos = ((float)votosNulos / totalEleitores) * 100;
    percentBranco = ((float)votosBranco / totalEleitores) * 100;

    printf("\nResultados:\n");
    printf("Numero total de eleitores: %d\n", totalEleitores);
    printf("Percentual de votos validos: %.2f%%\n", percentValidos);
    printf("Percentual de votos para o candidato A: %.2f%%\n", percentA);
    printf("Percentual de votos para o candidato B: %.2f%%\n", percentB);
    printf("Percentual de votos para o candidato C: %.2f%%\n", percentC);
    printf("Percentual de votos nulos: %.2f%%\n", percentNulos);
    printf("Percentual de votos em branco: %.2f%%\n", percentBranco);

    system("pause");
    return 0;
}
