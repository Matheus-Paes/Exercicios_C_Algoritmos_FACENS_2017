#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Inicio\n");

    for (num = 10+2; num < 80; num++){

    if (num %2 == 0){
        printf("%i\t",num);
    }
    }
    printf("Fim");

    return 0;
}
