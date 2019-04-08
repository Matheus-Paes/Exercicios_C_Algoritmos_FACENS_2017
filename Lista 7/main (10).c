#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10], inv[10], i;

            printf("Digite os 10 numeros.\n");
        for(i=0; i<10; i++){
            scanf("%i", &v[i]);
            inv[9-i]=v[i];
        }

            printf("posicoes com numero iguais:");
        for(i=0; i<10; i++){
            if(v[i]==inv[i]){
                printf("%i ", i);
            }
        }
    return 0;
}
