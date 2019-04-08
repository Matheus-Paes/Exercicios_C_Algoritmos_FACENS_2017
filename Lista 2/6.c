#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;

        printf("Insira dois numeros: \n");
            scanf("%f %f" , &n1, &n2);

    if( n1 > n2 ){
        printf("ordem = %.2f, %.2f", n1, n2);
    }
        if( n2 > n1 ){
        printf("ordem = %.2f, %.2f", n2, n1);
    }
    return 0;
}
