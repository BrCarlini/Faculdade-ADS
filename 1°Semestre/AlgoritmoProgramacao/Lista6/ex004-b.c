/*
4b - informe também a altura média destes 5 atletas. 
*/

#include <stdio.h>

int main()
{
    float altura, acum, media = 0;

    for(int i = 1; i <= 5; i++){
        printf("Informe a altura do %do atleta: ", i);
        scanf("%f", &altura);

        acum += altura;
    }

    media = acum / 5;

    printf("A altura media dos 5 atletas eh de: %.2f", media);

    return 0;
}
