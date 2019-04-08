#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[15], i;

    for(i=0; i<15; i++){
        printf("Informe o valor %i: ", i);
            scanf("%i", &vetor[i]);
    }

    for(i=0; i<15; i++){
        printf("\nDobro = %i", vetor[i]*2);
    }
    return 0;
}
