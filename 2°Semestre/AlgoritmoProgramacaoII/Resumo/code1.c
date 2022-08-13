// Composição de Strings com printf()

// Código 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    char letra = 'B';
    int idade = 24;
    char nome[] = "Bruno Carlini";
    double media = 9.50;



    printf("Meu nome é %s. \nTenho %d anos de idade, \nMinha méida final é %.2f,\nE a inicial do meu nome é %c", nome, idade, media, letra);

    printf("\n\nMedia %5.2f \n", media);

    printf("Media %-5.2f \n", media);

    system("pause");
    return 0;
}
