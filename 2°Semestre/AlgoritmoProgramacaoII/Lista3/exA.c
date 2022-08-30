#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
{
    
    exibirLista();
    return 0;
}

/*
a) Ler 10 elementos de uma matriz tipo vetor e apresenta-lo
*/
exibirLista(){
    int matriz[10];
    int num;

    for(int i = 0; i <= 9; i++){
    printf("Informe 10 numeros inteiros: ");
    scanf("%d", &num);

    matriz[i] = num;
    }


    for(int i = 0; i <= 9; i++){
        printf("-> %d\n", matriz[i]);
    }
}

/*
b) Ler 8 elementos em uma matriz A tipo vetor. Construir uma matriz B de mesma dimensão com oselementos da matriz A multiplicados por 3. O elemento B[i] deverá ser implicado pelo elementoA[i]*3, o elemento B[2] implicado pelo elemento A[2]*3 e assim por diante, até 8. Apresentar o vetorB.
*/
