#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int matriz[2][2],i,j,matriz1[2][2];
    for(j=0;j<2;j++)
    {
        for(i=0;i<2;i++)
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


}
