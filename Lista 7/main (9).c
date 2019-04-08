#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10], i, n;
    int cont = 0;

        for(i=0; i<10; i++){
            printf("Informe o valor %i: ", i);
                scanf("%i", &v[i]);
        }

            printf("Digite o valor a ser buscado: ");
                scanf("%i", &n);
    while(1){
        for(i=0; i<10; i++){
            if(n == v[i]){
                cont++;
                }
            }
               if(cont==0){
                printf("Valor nao encontrado. Digite outro");
                    scanf("%i", &n);
               }else break;

        }
        printf("O numero %i repete %i vez(es).", n, cont);
    return 0;
}
