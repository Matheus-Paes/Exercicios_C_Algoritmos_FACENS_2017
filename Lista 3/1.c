#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1;

        printf("Insira um numero: ");
            scanf("%f", &n1);

    if (n1 > 0){
        printf("Positivo");

    }
    else if (n1 == 0){
        printf("nulo");
    }

    else{
        printf("Negativo");

    }            return 0;
}
