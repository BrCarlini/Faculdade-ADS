/*
2 - Solicite 5 números. Exiba os que estão acima da média.
*/

#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5;

    printf("Informe 5 numeros: \n");

    printf(">>> ");
    scanf("%d", &n1);

    printf(">>> ");
    scanf("%d", &n2);

    printf(">>> ");
    scanf("%d", &n3);

    printf(">>> ");
    scanf("%d", &n4);

    printf(">>> ");
    scanf("%d", &n5);

    float media = (n1 + n2 + n3 + n4 + n5) / 5;

    if(n1 > media){
        printf("%d", n1);
    } else if(n2 > media){
        printf("%d", n2);
    } else if(n3 > media){
        printf("%d", n3);
    } else if(n4 > media){
        printf("%d", n4);
    } else if(n5 > media){
        printf("%d", n5);
    } else {
        printf("Nenhum numero eh maior que a media");
    }


    return 0;
}
