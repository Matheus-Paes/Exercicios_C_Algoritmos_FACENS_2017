#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[12], i;

    for(i=0; i<12; i++){
        printf("Informe o valor %i: ", i);
            scanf("%i", &v[i]);
    }
    for(i=0; i<12; i++){
        v[i];
    if(v[i] > 0){
        printf("%i\n", v[i]);
    }
    }
    return 0;
}
