#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10], i;
    int soma=0;

    for(i=0; i<10; i++){
        do{

            printf("Informe o valor %i: ", i);
            scanf("%i", &v[i]);


        }while (v[i] < 0);
    }
        printf("Vetores impares: \n");

    for(i=1; i<10; i+=2){
    soma += v[i];
        printf("%i - %i\n", i, v[i]);
    }
        printf("Soma dos vetores impares = %i", soma);


    return 0;
}
