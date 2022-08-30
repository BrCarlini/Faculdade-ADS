#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int x[] = {1, 0, -1};


int main()
{

    // Vetores Explícitos(Listas) & Sizeof()

    int n = sizeof(x)  / sizeof(int); 
    // printf("%d", n);

    int aux = 0;

    for(int i = 0; i < n; i++){
        aux = pow(x[i], 2) + x[i];
        printf("Valor: %d\n", aux);
    }
    


    
    return 0;
}
