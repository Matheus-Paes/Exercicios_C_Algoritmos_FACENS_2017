#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, maior, menor;
    float num;

    for(i = 1; i <= 10; i++){
        printf("Insira o valor %i: ", i);
            scanf("%f", &num);
    if(i == 1){
        maior = num;
        menor = num;
    }
    else{
        if(num > maior){
            maior = num;
        }
        else{
            if(num < menor){
                menor = num;
            }
        }
    }
    }

        printf("Maior = %i", maior);
        printf("\nMenor = %i", menor);

    return 0;
}
