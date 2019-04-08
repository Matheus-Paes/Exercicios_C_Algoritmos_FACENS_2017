#include <stdio.h>
#include <stdlib.h>

int main()
{

    float num;
    printf("Digite um valor: ");

    scanf ("%f", &num);
        if(num > 0){
            printf("Positivo");
        }
        if(num < 0){
            printf("Negativo");
        }
    return 0;
}
