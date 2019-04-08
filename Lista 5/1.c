#include <stdio.h>
#include <stdlib.h>

int main()
{
    int conta, contador;
    float n1, n2, media, a;

        printf("Insira a quantidade de dados que voce deseja informar: ");
            scanf("%i", &conta);

        printf("Insira o valor 1: ");
            scanf("%f", &n1);
            a = a + n1;

        for(contador = 2; contador <= conta; contador++){
            printf("Insira o valor %i: ", contador);
                scanf("%f", &n2);
                a = a + n2;
        }
        media = (a / conta);

            printf("Media = %.2f", media);
    return 0;
}
