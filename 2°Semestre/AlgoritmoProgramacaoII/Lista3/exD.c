#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
d) Ler 15 elementos de uma matriz tipo vetor. Construir uma matriz B de mesmo tipo, observando a seguintes lei de formação: “Todo elemento de B deverá ser o quadrado do elemento de A correspondente”. Apresentar as matrizes A e B
*/

int main()
{
    int a[15];
    int b[15];
    int n;

    for(int i = 0; i <= 14; i++){
        printf("Informe o %do numero: ", i+1);
        scanf("%d", &n);

        a[i] = n;
        b[i] = n * n;
    }


    printf("\n==================================================\n");


    printf("Numeros do Array A:\n");
    for(int i = 0; i <= 14; i++){
        printf("--> %d\n", a[i]);
    }


    printf("\n==================================================\n");


    printf("Numeros Array B (Quadrado de A):\n");
    for(int i = 0; i <= 14; i++){
        printf("--> %d\n", b[i]);
    }


    return 0;
}