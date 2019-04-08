#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;

    do{
        printf("%i ", i);
        i = i+2;
    }while(i < 100);

    return 0;
}
