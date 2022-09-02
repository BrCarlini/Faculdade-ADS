
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{

    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int c[10];

    int test = sizeof(c)/sizeof(c[0]);
    printf("Tamanho array: %d\n", test);
    printf("===============================================================\n");

    for(int i = 0; i <= 4; i++){
    
        c[i] = a[i];
    }

    for(int i = 9; i > 4; i--){
    
        c[i] = b[i-5];
    }


    printf("===============================================================\n");
    for(int i = 0; i <= 4; i++){
        printf("Matriz A -> %d\n", a[i]);
    }

    printf("===============================================================\n");

    for(int i = 0; i <= 4; i++){
        printf("Matriz B -> %d\n", b[i]);
    }

    printf("===============================================================\n");

    for(int i = 0; i <= 9; i++){
        printf("Matriz C -> %d\n", c[i]);
    }


    return 0;
}
