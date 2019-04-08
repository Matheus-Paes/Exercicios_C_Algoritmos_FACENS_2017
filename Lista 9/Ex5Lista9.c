#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int matriz[4][4], i,j,vetor[4],soma=0,aux;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\tInsira um numero\n");
            scanf("%i",&matriz[i][j]);
            if(i==j)
            {
                soma+=matriz[i][j];
                aux = matriz[i][j];
                vetor[i] = aux;
            }

        }
    }
    for(i=0;i<4;i++)
    {
        printf("\t%i\t",vetor[i]);

    }
    printf("\n");
    printf("\tSoma %i\n",soma);




}

