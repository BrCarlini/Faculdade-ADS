#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Vetores e Matrizes


    /*
    [Forma Explícita]

    define-se o nome e os dados, o tamanho dependera dos dados.

    */

   int x[] = {1, 0, -1};

   for(int i = 0; i < 3; i++){
    printf("(%d) ", x[i]);
   }

   printf("\n");


   /*
   [Não explícita]

   define-se o nome e o tamanho somente. Os dados são inseridos depois.

   */

  int y[3];
  y[0] = 5;
  y[1] = 10;
  y[2] = 3;

  for (int i = 0; i < 3; i++){
    printf("(%d) ", y[i]);
  }
  

    
    return 0;
}
