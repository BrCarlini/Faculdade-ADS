#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    subMatriz();
    return 0;
}

/*
c) Ler duas matrizes A e B do tipo vetor com 20 elementos. Construir uma matriz C, onde cada elemento de C é a subtração do elemento correspondente de A com B. Apresentar a matriz C
*/

subMatriz(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int b[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int c[20];

    for(int i = 0; i <= 19; i++){
        c[i] = a[i] - b[i];
        printf("%d\n", c[i]);
    }
    
}
