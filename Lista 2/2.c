#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EXERCICIO 2

    float num;
        printf("Digite um valor: ");
            scanf("%f", &num);

    if( num >= 0 && num <= 9 ){
        printf("Correto");
    }

    else{
        printf("Errado");
    }

    return 0;
}
