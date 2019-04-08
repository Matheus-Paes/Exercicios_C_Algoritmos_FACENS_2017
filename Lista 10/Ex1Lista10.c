#include<stdio.h>

#include<stdlib.h>

int main (void)
{
    int matriz[4][4],matriz1[4][4],matriz2[4][4],i,j,maior=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            matriz[i][j]=0;
            matriz1[i][j]=0;
            matriz2[i][j]=0;
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\tInsira os elementos da 1 matriz\n");
            scanf("%i",&matriz[i][j]);

        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\tInsira os elementos da 2 matriz\n");
            scanf("%i",&matriz1[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(matriz[i][j]>matriz1[i][j])
            {
                matriz2[i][j]=matriz[i][j];

            }
            else if(matriz1[i][j]>matriz[i][j])
            {
                matriz2[i][j] = matriz1[i][j];

            }
            else
            {
                matriz2[i][j] = matriz[i][j];
            }
            printf("\t%i\t",matriz2[i][j]);
        }
        printf("\n");
    }

}
