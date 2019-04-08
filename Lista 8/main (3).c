#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1[12],v2[12];
    int i;
    for(i=0;i<12;i++)
    {
        printf("Digite os numeros: ");
        scanf("%f", &v1[i]);
    }
    for(i=0;i<12;i++)
    {
        if(i%2==0)
        {
            v2[i]=v1[i]/2.0;
        }
        else
        {
            v2[i]=v1[i]*3.0;
        }
    }
    printf("\n");
    for(i=0;i<12;i++)
    {
        printf(" %.1f ", v1[i]);
    }
    printf("\n");
    printf("\n");
    for(i=0;i<12;i++)
    {
        printf(" %.1f ", v2[i]);
    }

    return 0;
}
