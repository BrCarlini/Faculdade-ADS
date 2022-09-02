#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    
    triplicarDados();
    
    return 0;
}

/*
b) Ler 8 elementos em uma matriz A tipo vetor. Construir uma matriz B de mesma dimensão com os elementos da matriz A multiplicados por 3. O elemento B[i] deverá ser implicado pelo elementoA[i]*3, o elemento B[2] implicado pelo elemento A[2]*3 e assim por diante, até 8. Apresentar o vetorB.
*/

triplicarDados(){
    int matrizA[8];
    int matrizB[8];
    int num;

    for(int i = 0; i <= 7; i++){
        printf("Informe o %do numero: ", i+1);
        scanf("%d", &num);

        matrizA[i] = num;
    }
    

    for(int i = 0; i <= 7; i++){
        matrizB[i] = matrizA[i] * 3;
    }

    for(int i = 0; i <= 7; i++){
        printf("%d\n", matrizB[i]);
    }
}