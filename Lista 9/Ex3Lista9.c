#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int matriz[3][4], i,j, pos=0, maior=0;
    for(i=0;i<3;i++)
    {   printf("Linha %i\n", i);
        for(j=0;j<4;j++)
        {
            printf("Coluna %i: ", j);
            scanf("%i",&matriz[i][j]);
            if(matriz[i][j]>maior){
                maior=matriz[i][j];
                pos = (i+1)*(j+1);
            }
        }
    }

    printf("\tMaior: %i\n",maior);
    printf("\tPosicao: %i\n",pos);

}
