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

