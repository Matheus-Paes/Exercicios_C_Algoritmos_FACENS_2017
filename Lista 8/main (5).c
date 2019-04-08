#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10], v1[10], v2[10], i, j=0, par=0, impar=0;
    for(i=0;i<10;i++)
    {
        printf("Digite os numeros: ");
        scanf("%i", &v[i]);
        if(v[i]%2==0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }
    for(i=0;i<10;i++)
    {
        if(v[i]%2==1)
        {
            v1[j++]=v[i];
        }
    }
    j=0;
    for(i=0;i<10;i++)
    {
        if(v[i]%2==0)
        {
            v2[j++]=v[i];
        }
    }
    printf("\n");
    for(i=0;i<impar;i++)
    {
        printf(" %i ", v1[i]);
    }
    printf("\n");
    for(i=0;i<par;i++)
    {
        printf(" %i ", v2[i]);

    return 0;
}
}
