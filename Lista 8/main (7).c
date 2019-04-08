#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[15], i, j, aux;
    for (i=0; i<15; i++)
    {
        printf("Informe vet[%i]: ", i+1);
        scanf("%i", &v[i]);
    }
    for (i=0; i<14; i++)
    {
        for (j=i+1; j<16; j++)
        {
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    printf("Vetor ordenado\n");
    for (i=0; i<15; i++)
    {
        printf("%i\t", v[i]);
    }

    return 0;
}
