#include <stdio.h>
#include <stdlib.h>

int main()
{
    int divisor, inicioIntervalo, fimIntervalo, i;

        printf("Informe o divisor: ");
            scanf("%i", &divisor);

        printf("Informe o inicio do intervalo: ");
            scanf("%i", &inicioIntervalo);

        printf("Informe o fim do intervalo: ");
            scanf("%i", &fimIntervalo);

        printf("Valores divisiveis por %i no intervalo de %i a %i: \n", divisor, inicioIntervalo, fimIntervalo);

  // printf("%i", divisor);
  // printf("%i", inicioIntervalo);
  // printf("%i", fimIntervalo);

  for(i = inicioIntervalo; i <= fimIntervalo; i++) {

    if(i % divisor == 0) {

      printf("%i ", i);

    }
  }


    return 0;
}
