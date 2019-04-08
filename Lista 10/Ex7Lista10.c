#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int matriz[4][3],qt=0,soma=0,i,j;
    float soma1=0,media=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\tInsira o estoque\n");
            scanf("%i",&matriz[i][j]);
            if(j==1)
            {
                qt+=matriz[i][j];
            }
            if(i==0)
            {
                soma+=matriz[i][j];
            }
            if(j==2)
            {
                soma1+=matriz[i][j];
            }
        }

    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%i",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\tQuantidade 2 armazem %i\n",qt);
    printf("\tMedia 3 armazem %.2f\n",soma1/3);
    printf("\tQuantidade 1 produto %i\n",soma);


}

