#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;

        printf("Insira um numero: ");
            scanf("%f", &n1);

        printf("Insira um numero: ");
            scanf("%f", &n2);

        if(n1 > n2){
            printf("maior numero = %f", n1);
}
        else{
            printf("maior numero = %.2f", n2);
        }
    return 0;
}
