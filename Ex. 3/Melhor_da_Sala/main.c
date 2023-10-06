#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int qtd_alunos,i=1,nts_alunos,maior_nota;
    char nms_alunos[30];

    printf("-----------------------------\n");
    printf("ESCOLA ESTADUAL RUAN OLIVEIRA\n");
    printf("-----------------------------\n");
    printf("Quantos alunos a turma tem? ");
    scanf("%i",&qtd_alunos);
    printf("-----------------------------\n\n");

    do{
        printf("ALUNO %i\n\n",i);
        printf("NOME DO ALUNO (A): ");
        scanf("%s",&nms_alunos);
        printf("NOTA DO %s: ",nms_alunos);
        scanf("%i",&nts_alunos);
        printf("-----------------------------\n\n");

        if(nts_alunos > maior_nota){
            maior_nota = nts_alunos;
        }

        i++;

    }while(i <= qtd_alunos);

    printf("O aluno %s tem a melhor nota da sala sendo a nota: %i",nms_alunos,maior_nota);

    system("pause");
    return 0;
}
