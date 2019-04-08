#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3;

        printf("Insira o primeiro lado: ");
            scanf("%f", &n1);

        printf("Insira o segundo lado: ");
            scanf("%f", &n2);

        printf("Insira o terceiro lado: ");
            scanf("%f", &n3);

    if(n1 == n2 && n1 == n3 && n2 == n3){
        printf("Triangulo equilatero");
    }
    if(n1 != n2 && n2 == n3 || n1 == n3 && n1 != n2 || n1 == n2 && n2 != n3){
        printf("Triangulo isoceles");
    }
    if(n1 != n2 && n1 != n3 && n2 != n3){
        printf("Triangulo escaleno");
    }
    return 0;
}
