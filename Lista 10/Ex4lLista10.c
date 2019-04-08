#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int matriz[3][3],i,j,soma=0,qt=0;
    float media=0,soma1=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\tInsira um numero\n");
            scanf("%i",&matriz[i][j]);
            if(matriz[i][j]%2==0)
            {
                soma+=matriz[i][j];
            }
            else
            {
                qt++;
            }
            soma1+=matriz[i][j];
        }
    }
    media = soma1/3;
    printf("\tSoma elementos pares: %i\n",matriz[i][j]);
    printf("\tMedia elementos da matriz %.2f\n",media);
    printf("\tQtde elementos impares: %i\n",qt);
}
