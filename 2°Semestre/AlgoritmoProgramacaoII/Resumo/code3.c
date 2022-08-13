#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    char letra; // Armaneza apenas um caractere
    int idade; // Armazena um inteiro
    double media; // é um tipo que representa os números com ponto flutuante porem muito mais preciso

    printf("Digite a primeira letra do seu nome:");
    scanf("%c", &letra);

    printf("Digite a sua idade:");
    scanf("%d", &idade);

    printf("Digite a sua média:");
    scanf("%lf", &media);

    printf("Sua idade é %d, sua média é %5.2f e a primeira letra do seu nome é %c \n", idade, media, letra);

    return 0;
}
