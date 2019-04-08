#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int matriz[3][3], i,j,matriz2[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\tInsira um numero\n");
            scanf("%i",&matriz[i][j]);
            matriz2[i][j] = matriz[i][j]*2;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

           printf("\t%i\t",matriz2[i][j]);
        }
        printf("\n");
    }



}
