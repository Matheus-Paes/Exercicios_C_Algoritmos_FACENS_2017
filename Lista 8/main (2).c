#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam, i, impar=1, qtd=0;
    float media_par, soma_par=0;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &tam);
    int v[tam];
    for(i=0;i<tam;i++)
    {
        printf("Digite os valores do vetor: ");
        scanf("%i", &v[i]);
    }
    for(i=0;i<tam;i++)
    {
        if(i%2==0)
        {
            qtd++;
            soma_par = soma_par + v[i];
        }
        else
        {
            impar=impar * v[i];
        }
    }
    media_par=soma_par/qtd;
    printf("\nMedia dos pares: %.2f", media_par);
    printf("\nProduto dos impares: %i", impar);

    return 0;
}
