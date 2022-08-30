#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//int const n = 3;
double sal[3];
int ida[3];

int main (void) { 
    double x;
    for (int i = 0; i < 3 ; i ++){

        printf("\nDigite salario e idade:");
        scanf("%lf", &sal[i]);
        scanf("%d", &ida[i]);
    }

    printf("\nAumento - Idade");

    for ( int i=0; i < 3; i++){
        x = sal[i] * 1.1;
        printf( "\n%.2lf - %d", x, ida[i] ); 
    }

    
    return 0; 
}