/*5 - Escreva uma função que recebe dois valores int e um float, e retorna o menor deles.*/

#include <stdio.h>

int min(int num1, float num2){
    if(num1 < num2){
        printf("%d", num1);
    }
    else{
        printf("%.2f", num2);
    }
}





int main(void){
    int entrada1;
    float entrada2;

    printf("Informe o Primeiro numero: ");
    scanf("%d", &entrada1);

    printf("Informe o Segundo numero: ");
    scanf("%f", &entrada2);
    
    min(entrada1, entrada2);

    
    return 0;
}