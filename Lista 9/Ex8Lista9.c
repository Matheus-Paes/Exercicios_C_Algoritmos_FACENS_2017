#include<stdio.h>
#include<stdlib.h>

int main (void)
{

    int matriz[4][4], i,j,maior=0,a,b,menor;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\tInsira um numero\n");
            scanf("%i",&matriz[i][j]);
            if(matriz[i][j]>maior)
            {
                maior=matriz[i][j];
                a=i;

            }
        }
    }
    printf("\tMaior: %i\n",maior);
    for(b=0;b<4;b++)
    {
        if(matriz[a][b]<menor)
        {
            menor = matriz[a][b];
        }
    }
    printf("\tMinimax %i\n",menor);

}
