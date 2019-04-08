#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int matriz[2][2],vetor[2],soma,i,j;
    for(i=0;i<2;i++)
    {
        vetor[i]=0;
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\tInsira um numero\n");
            scanf("%i",&matriz[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t%i",matriz[i][j]);
        }
        printf("\n");
    }
    for(j=0;j<2;j++)
    {
        for(i=0;i<2;i++)
        {
            vetor[j]+=matriz[i][j];
        }
    }
    printf("\tSOMA COLUNAS\n");
    for(j=0;j<2;j++)
    {
        printf("\t%i",vetor[j]);
    }
}
