#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[0], x, num, i;

        printf("Informe um numero: ");
            scanf("%i", &num);
        printf("Informe o tamanho do numero (casas): ");
            scanf("%i", &x);
        printf("Digite cada algarismo do numero escolhido: ");
        for(i=0; i<x; i++){
            scanf("%i", &v[i]);
            v[i]=v[(x-1)-1];
        }
        for(i=0; i<x; i++){
            printf("%i\t%i", v[i], v[i-x]);
        }
    return 0;
}
