#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int matriz[5][5],i,j,soma=0,soma1=0,soma2=0,soma3=0;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\tInsira um numero\n");
            scanf("%i",&matriz[i][j]);
            if(i+1==j+2)
            {
                soma+=matriz[i][j];
            }
            if(i-1==j-2)
            {
                soma1+=matriz[i][j];
            }
            if(j>i)
            {
                soma2+=matriz[i][j];
            }
            else if(i>j)
            {
                soma3+=matriz[i][j];
            }

        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\t%i",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\tSoma elementos acima: %i\n",soma2);
    printf("\tSoma elementos abaixo: %i\n",soma3);
    printf("\tElementos logo acima: %i\n",soma);
    printf("\tElementos logo abaixo %i\n",soma1);

}
