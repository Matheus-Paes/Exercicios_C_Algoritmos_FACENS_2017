#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,cont=1;
float vet[50],aux;

    printf("Digite o numero de elementos do vetor:");
    scanf("%i",&n);
    for(i=0;i<n;i++)
    {
        printf("vet[%i]:",i+1);
        scanf("%f",&vet[i]);
    }
    for(i=0;i<n;i++)
    {
        aux=vet[i];
        cont=1;
        for(j=i+1;j<n;j++)
        {
            if(aux==vet[j])
            {
                cont=cont+1;
                vet[j]=1000;
            }
        }
        if(vet[i]!= 1000)
        {
            if(cont>1)
            {
                printf("%.2f ocorre %i vezes.\n",vet[i],cont);
            }
            else
            {
                printf("%.2f ocorre %i vez.\n",vet[i],cont);
            }
        }
    }

    return 0;
}
