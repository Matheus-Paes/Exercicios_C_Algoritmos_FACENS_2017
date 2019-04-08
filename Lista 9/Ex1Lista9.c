#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int matriz[4][3], i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\tInsira um numero\n");
            scanf("%i",&matriz[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%i\t",matriz[i][j]);
        }
        printf("\n");
    }

}
