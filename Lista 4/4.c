#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, entre;

        printf("Insira um numero: ");
            scanf("%i",&n1);

        printf("Insira um numero: ");
            scanf("%i", &n2);

    for (entre = n1+1; entre < n2; entre++){
        printf("%i\t", entre);

    }
    }
    return 0;
}
