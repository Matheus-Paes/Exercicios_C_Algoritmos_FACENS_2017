#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int matriz[3][4], i,j,soma=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\tInsira um numero\n");
            scanf("%i",&matriz[i][j]);

        }
    }
    printf("\tEscolha a linha para calcular a media\n");
    scanf("%i",&i);
    for(j=0;j<4;j++)
    {
        soma+=matriz[i][j];
    }
    soma=soma/4;
    printf("\tMedia %i\n",soma);





}

