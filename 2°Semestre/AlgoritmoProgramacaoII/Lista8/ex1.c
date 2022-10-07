/* Faça os programas a seguir de forma estruturada contendo funções de leitura,
funções de cálculos e voids de saída. a) Equação do Segundo Grau b) Triângulo
Heron c) Cálculo da área de um círculo. 
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#define pi 3.14

void lerSegundoGrau();
void lerTrianguloHeron();
void lerCirculo();
void equacaoSegundoGrau(float *valorA, float *valorB, float *valorC);
void trianguloHeron(float *valorAT, float *valorBT, float *valorCT);
void circulo();
void exibir();
//---------------------------------
struct equacao_segundo {
  float delta;
  float x1;
  float x2;
  float a;
  float b;
  float c;
};

struct equacao_segundo Bhaskara;
//---------------------------------
struct triangulo_heron {
  float area;
  float p;
  float a;
  float b;
  float c;
};

struct triangulo_heron AreaT;
//---------------------------------
struct area_circulo {
  float area;
  float raio;
};

struct area_circulo AreaCirculo;
//---------------------------------

int main()
{
  int item;
  
  do{
    system("clear");
      printf("\nEscolha o que voce deseja fazer:\n\n[1] Ler dados - Calculo Segundo Grau\n[2] Calcular - Segundo Grau\n[3] Ler Dados - Calculo Triangulo Heron\n[4] Calcular - Triangulo Heron\n[5] Ler dados - Calculo Area de um Circulo\n[6] Calcular - Area Circulo\n[7] Exibir\n[8] Sair\n\n[-]Escolha um item: ");
    scanf("%d", &item);
    switch(item)
      {
        case 1:
          lerSegundoGrau();
          break;
        case 2:
          equacaoSegundoGrau(&Bhaskara.a, &Bhaskara.b, &Bhaskara.c);
          break;
        case 3:
          lerTrianguloHeron();
          break;
        case 4:
          trianguloHeron(&AreaT.a, &AreaT.b, &AreaT.c);
          break;
        case 5:
          lerCirculo();
          break;
        case 6:
          circulo(&AreaCirculo.raio);
          break;
        case 7:
          exibir();
          break;
        case 8:
          printf("Saindo......\n");
          //system("sleep 3");
          exit(0);
          break;
        default:
          printf("Parece que voce nao digitou valores validos, tente novamente!");
          break;
      }
  }while(item != 8);
  
  return 0;
}
//---------------------------------------------------------------------------
void lerSegundoGrau(){
  
  printf("Digite o valor de A da equacao: ");
  scanf("%f", &Bhaskara.a);
  printf("Digite o valor de B da equacao: ");
  scanf("%f", &Bhaskara.b);
  printf("Digite o valor de C da equacao: ");
  scanf("%f", &Bhaskara.c); 
}

//---------------------------------------------------------------------------
void equacaoSegundoGrau(float *a, float *b, float *c)
{
  Bhaskara.delta = (pow(*b, 2) - (4 * *a * *c));
  if(Bhaskara.delta < 0) {
      printf("Parece que o delta deu um valor menor, não é possível resolver\n");
  }
  else {
    Bhaskara.x1 = (-*b + pow(Bhaskara.delta, 0.5))/2 * *a;
    Bhaskara.x2 = (-*b - pow(Bhaskara.delta, 0.5))/2 * *a;
  }
}
//---------------------------------------------------------------------------
void lerTrianguloHeron(){
  bool cont = false;

  while(!cont)
    {
      printf("Digite o lado 1 do triangulo em cm: ");
      scanf("%f", &AreaT.a);
      printf("Digite o lado 2 do triangulo em cm: ");
      scanf("%f", &AreaT.b);
      printf("Digite o lado 3 do triangulo em cm: ");
      scanf("%f", &AreaT.c);
      
      if(AreaT.a + AreaT.b > AreaT.c && AreaT.b + AreaT.c > AreaT.a && AreaT.c + AreaT.a > AreaT.b)
          {
            printf("\nOs valores correspondem a um triângulo\n"); 
            cont = true;
          }
          else
          {
            printf("\nOs Valores não correspondem a um triângulo que exista. Digite valores validos\n\n");
          }
    }
}
//---------------------------------------------------------------------------
void trianguloHeron(float *a, float *b, float *c){
  float p = *a + *b + *c / 2;
  AreaT.area = pow(p * (p - *a) * (p - *b) * (p - *c), 0.5);
}
//---------------------------------------------------------------------------
void lerCirculo(){
  printf("Digite o valor do raio: ");
  scanf("%f", &AreaCirculo.raio);
}
//---------------------------------------------------------------------------
void circulo(float *raio){
  AreaCirculo.area = pi * pow(*raio, 2);
}

//---------------------------------------------------------------------------
void exibir(){
  printf("\n");
  printf("Valores equação segundo grau:\n");
  printf("O valor de X1 eh de %.2f\n", Bhaskara.x1);
  printf("O valor de X2 eh de %.2f\n", Bhaskara.x2);
  printf("(//-----------------------------------------//)\n");
  printf("Valor área triângulo:\n");
  printf("A área do triângulo eh de %.2f\n", AreaT.area);
  printf("(//-----------------------------------------//)\n");
  printf("Valor área círculo:\n");
  printf("A área do círculo eh de %.2f\n", AreaCirculo.area);
  //system("sleep 3");
}
//---------------------------------------------------------------------------