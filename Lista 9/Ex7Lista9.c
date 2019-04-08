#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int matriz[3][5], i,j,matriz1[3][5],soma=0,vetor[5];
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\tInsira um numero\n");
            scanf("%i",&matriz[i][j]);
            matriz1[i][j] = matriz[i][j];
            if(matriz[i][j]<0)
            {
                matriz[i][j] = 0;
            }


        }
    }
    printf("\tORIGINAL\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\t%i\t",matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\tMODIFICADA\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\t%i\t",matriz[i][j]);
        }
        printf("\n");
    }
    for(j=0;j<5;j++)
    {
        for(i=0;i<3;i++)
        {
            soma=soma + matriz[i][j];

        }
        vetor[j]=soma;
        soma = 0;

    }
    printf("\tSOMA DAS COLUNAS\n");
    for(j=0;j<5;j++)
    {
       printf("\t%i\t",vetor[j]);
    }





}

