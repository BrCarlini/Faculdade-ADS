#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
f) Ler duas matrizes do tipo vetor, sendo A com 20 elementos e B com 30 elementos. Construir umamatriz C, 
sendo esta a junção das duas outras matrizes.
Desta forma, C deverá ter a capacidade dearmazenar 50 elementos. Apresentar a matriz C
*/
int main()
{
    
    int A[20], B[30], C[50];
      
      int Asize = sizeof(A)/sizeof(int);
      for(int i = 0; i < Asize; i++){
        printf("Digite um numero para o Array A: ");
        scanf("%i", &A[i]);
      }
      int Bsize = sizeof(B)/sizeof(int);
      for(int i = 0; i < Bsize; i++){
        printf("Digite um numero para o Array B: ");
        scanf("%i", &B[i]);
      }
      
      int counter = 0;
      
      for(int i = 0; i < Asize; i++){
        C[counter] = A[i];
        counter++;
      }
      for(int i = 0; i < Bsize; i++){
        C[counter] = B[i];
        counter++;
      }

      int Csize = sizeof(C)/sizeof(int);
      printf("C[] = ");
      for(int i = 0; i < Csize; i++){
        if(i == Csize -1){
          printf("%i", C[i]);
        }
        else{
          printf("%i, ", C[i]);
        }
      }


    return 0;
}
