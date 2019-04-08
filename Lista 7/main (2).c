#include <stdio.h>
#include <stdlib.h>

int main()
{    int i;
    float v[10], num;

    for(i=0; i<=9; i++){
        printf("Digite um valor: ");
            scanf("%f", &num);
         v[0+i] = num;
    }
    for(i=9; i>=0; i--){
        printf("%.2f\n", v[0+i]);
    }
    return 0;
}
