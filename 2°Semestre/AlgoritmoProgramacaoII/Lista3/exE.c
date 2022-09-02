#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
e) Ler duas matrizes A e B do tipo vetor com 15 elementos cada. Construir uma matriz C,
sendo esta a junção das duas outras matrizes. 
Desta forma, C deverá ter o dobro de elementos, ou seja, 30.
Apresentar a matriz C.
*/

int main()
{
    int a[15];
    int b[15];
    int c[30];
    int n;

    for(int i = 0; i <= 14; i++){
        printf("Informe o %do numero para preencher a Matriz A: ", i+1);
        scanf("%d", &n);
        a[i] = n;

        printf("Informe o %do numero para preencher a Matriz B: ", i+1);
        scanf("%d", &n);
        b[i] = n;
    }

    printf("===============================================================\n");
    for(int i = 0; i <= 14; i++){
        printf("Matriz A -> %d\n", a[i]);
    }

    printf("===============================================================\n");

    for(int i = 0; i <= 14; i++){
        printf("Matriz B -> %d\n", b[i]);
    }

    printf("===============================================================\n");
    
    for(int i = 0; i <= 14; i++){
    
        c[i] = a[i];
    }

    for(int i = 29; i > 14; i--){
    
        c[i] = b[i-15];
    }

    for(int i = 0; i <= 29; i++){
        printf("Matriz C (%do) -> %d\n", i, c[i]);
    }

    return 0;
}
