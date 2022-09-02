#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
g) Ler 20 elementos de uma matriz A tipo vetor e construir uma matriz B de mesma dimensão
com os mesmo elementos da matriz A, sendo que deverão estar invertidos.
Ou seja, o primeiro elemento deA passa a ser o último de B, o segundo 
elemento de A passa a ser o penúltimo elemento de B eassim por diante. 
Apresentar as matrizes A e B lado a lado
*/

int main()
{
    int A[20], B[20];

      int Asize = sizeof(A)/sizeof(int);
      for(int i = 0; i < Asize; i++){
        printf("Digite um numero para o Array A: ");
        scanf("%i", &A[i]);
      }
      
      for(int i = 0, j = Asize - 1; i < Asize; i++, j--){
        B[i] = A[j];
      }

      printf("\nA\tB\n");
      for(int i = 0; i < Asize; i++){
        printf("%i\t%i\n", A[i], B[i]);
      }

    return 0;
}
