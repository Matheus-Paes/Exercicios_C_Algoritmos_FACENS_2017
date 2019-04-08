#include <Stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, res;
        printf("Digite o numerador: ");
            scanf("%f", &n1);

        printf("Digite o denominador: ");
            scanf("%f", &n2);

    if( n2 > 0 || n2 < 0 ){

            res = n1 / n2;
            printf("Resultado = %.2f", res);
    }

    else{
        printf("NAO EXISTE DIVISAO POR ZERO!");
    }


    return 0;
}
