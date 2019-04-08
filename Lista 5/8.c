#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, contador, alunos, disciplinas;
    float media, notas, a;

    printf("Insira a quantidade de alunos: ");
        scanf("%i", &alunos);

    for(i = 1; i <= alunos; i++){
        printf("Quantas diciplinas cursou no ultimo semestre?\n");
            scanf("%i", &disciplinas);

        for(contador = 1; contador <= disciplinas; contador++){
            printf("Insira as suas notas finais de cada disciplina: ");
                scanf("%f", &notas);

        a = a + notas;
        }

        media = (a / disciplinas);

        printf("\nMedia = %.2f", media);

    }





    return 0;
}
