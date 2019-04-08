#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[50], i, valor=2;

    for(i=0; i<50; i++){
        v[i]=valor;
        valor = valor +2;
    }

    for(i=0; i<50; i++){
        printf("%i\n", v[i]);
    }

    return 0;
}
