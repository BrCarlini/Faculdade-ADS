#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 4 - Sorteie dois números de 1 a 10. Informe quantos destes números estão entre 3 e 7 (inclusive).

Solução -> {x e R/ 3 <= x <= 7} = {3, 4, 5, 6, 7}

*/

int main(void){
    int sort1, sort2;

    srand(time(NULL));
    sort1 = rand() % 10 + 1;
    sort2 = rand() % 10 + 1;
    printf("Numero sorteado 1: %d\n", sort1);
    printf("Numero sorteado 2: %d\n", sort2);


    if(sort1 >= 3 && sort1 <= 7){
        printf("Primeiro numero sorteado esta entre 3 e 7...\n");
    }
    else {
        printf("Primeiro numero sorteado NAO esta entre 3 e 7...\n");
    }


    if(sort2 >= 3 && sort2 <= 7){
        printf("Segundo numero sorteado esta entre 3 e 7...\n");
    }
    else {
        printf("Segundo numero sorteado NAO esta entre 3 e 7...\n");
    }

    return 0;
}