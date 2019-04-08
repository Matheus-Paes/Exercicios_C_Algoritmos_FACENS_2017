#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int matriz[4][5],i,j,a,b,c;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\tInsira um numero\n");
            scanf("%i",&matriz[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\t%i",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\tInsira um numero\n");
    scanf("%i",&a);
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
           if(a==matriz[i][j])
           {
               b=i;
               c=j;
           }

        }
    }

    printf("\tCoordenadas numero\n\tLinha %i\n\tColuna %i\n",b,c);
}
