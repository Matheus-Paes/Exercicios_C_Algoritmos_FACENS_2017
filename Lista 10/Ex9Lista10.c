#include <stdio.h>
#include <conio.h>

int main(void)
{
    char alunos[10][3],gabarito[10];
    int i,j,acertos=0,acertos1[3],matricula[3],aprovacao=0;
    printf("\tInsira o gabarito\n");
    for (i=0; i<10; i++)
    {
        printf("\t%i)Questão\n",i+1);
        fflush(stdin);
        scanf("%c",&gabarito[i]);

    }
    for (i=0; i<3; i++)
    {
        printf("\tInsira seu numero de matricula\n");
        scanf("%i",&matricula[i]);
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
        if(acertos>5)
        {
            aprovacao++;
        }

        acertos1[i] = acertos;
        acertos = 0;
    }
    getch();
    system("cls");
    for(i=0;i<3;i++)
    {
        printf("\tAluno: %i \n\t%i acertos\n",matricula[i],acertos1[i]);
        printf("\tRESPOSTAS\n");
        for(j=0;j<10;j++)
        {

            printf("\t%c",alunos[i][j]);
            printf("\n");
        }

    }
    getch();
    aprovacao = (aprovacao*100)/3;
    printf("\tTaxa de aprovacao %i%%\n",aprovacao);



    return 0;
}
