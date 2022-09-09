#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double const txMulta = 0.02;
double const txJuros = 1 / 30;

int n = 5;
char Devedor[5][30];
double ValPrincipal[5];
int QntDias[5];

void menu();
void lerDias(int devedor);
void lerValor(int devedor);
void lerDevedor(int num);
double calcJuros(int devedor);
double calcMulta(int devedor);
double Media(double valPagar[5], int NumDevedores);
void exibir(int NumDevedores, double valPagar[5]);

int main(void)
{
    menu();
}

void exibir(int NumDevedores, double valPagar[5])
{
    for (int i = 0; i < NumDevedores; i++)
    {
        printf("%s || %.2lf\n", Devedor[i], valPagar[i]);
    }
    double media = Media(valPagar, NumDevedores);
    printf("Media dos valores: %.2lf\n", media);
}

double Media(double valPagar[5], int NumDevedores)
{
    int soma = 0;
    double media;
    for (int i = 0; i <= NumDevedores; i++)
    {
        soma += valPagar[i];
    }
    media = soma / NumDevedores;
    return media;
}

double calcMulta(int devedor)
{
    return ValPrincipal[devedor] * txMulta;
}

double calcJuros(int devedor)
{
    return ValPrincipal[devedor] * txJuros * QntDias[devedor];
}

void lerDevedor(int num)
{
    printf("Digite o nome do devedor: ");
    gets(Devedor[num]);
}

void lerValor(int devedor)
{
    printf("\nDigite o Valor da Prestacao devido: ");
    scanf("%lf", &ValPrincipal[devedor]);
}

void lerDias(int devedor)
{
    printf("Digite a quantidade de dias em atraso: ");
    scanf("%d", &QntDias[devedor]);
}

void menu()
{
    int item;
    int NumDevedores = 0;
    double valPagar[5];

    do
    {
        printf("|-------------|\n[1]EscreverDevedor\n[2]Calculo\n[3]Exibir\n[4]Sair\n|-------------|\n[-]Item: ");
        scanf("%d", &item);

        switch (item)
        {
        case 1:
            if (NumDevedores < 5)
            {
                lerDevedor(NumDevedores);
                lerValor(NumDevedores);
                lerDias(NumDevedores);
                NumDevedores++;
            }
            else
            {
                printf("Espaco Insuficiente\n");
            }
            break;
        case 2:
            for (int i = 0; i < NumDevedores; i++)
            {
                valPagar[i] = calcMulta(i) + calcJuros(i) + ValPrincipal[i];
            }
            printf("|--Calculado--|\n");
            break;
        case 3:
            exibir(NumDevedores, valPagar);
            break;
        case 4:
            printf("Saindo...\n");
            break;
        }
        if (item != 1 || item != 2)

            printf("\n");
        if (item != 4);
    } while (item != 4);
}