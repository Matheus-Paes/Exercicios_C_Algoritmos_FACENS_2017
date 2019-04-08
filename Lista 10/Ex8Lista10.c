#include <stdio.h>
#include <conio.h>

int main(void)
{
    char alunos[10][3],gabarito[10],acertos1[3];
    int i,j,acertos=0;
    printf("\tInsira o gabarito\n");
    for (i=0; i<10; i++)
    {
        printf("\t%i)Questão\n",i+1);
        fflush(stdin);
        scanf("%c",&gabarito[i]);

    }
    for (i=0; i<3; i++)
    {
        for(j=0;j<10;j++)
        {
            printf("\tInsira suas respostas\n");
            printf("\t%i)Questao\n",j+1);
            fflush(stdin);
            scanf("%c",&alunos[i][j]);

            if(alunos[i][j]==gabarito[i])
            {
                acertos++;
            }


        }

        acertos1[i] = acertos;
        acertos = 0;
    }
    getch();
    system("cls");
    for(i=0;i<3;i++)
    {
        printf("\t%i)Aluno\n\t%i acertos\n",i+1,acertos1[i]);
    }




   return 0;
}
