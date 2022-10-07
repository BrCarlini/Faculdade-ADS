#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int vetorNum[30];
int tamanhoVetor = 0;

int lerRand(int qnt, int inicial);
int buscaNum(int num, int len);
void OrdCres(int len);
void OrdDecres(int len);
void exibir(int qntNum);
void menu();

int main(void) {
  srand(time(NULL));
  system("clear");
  menu();
  return 0;
}
//funcionando
int buscaNum(int num, int len) {
  int i;
  if (len == 0)
    return -1;

  for (i = 0; i < len; i++) {
    if (vetorNum[i] == num)
      return i;
  }
  return -1;
}
//funcionando
void troca(int i, int j)
{
	int aux = vetorNum[i];
	vetorNum[i] = vetorNum[j];
	vetorNum[j] = aux;
}
//funcionando
int particiona(int inicio, int fim)
{
	int pivo, pivo_indice, i;
	
	pivo = vetorNum[fim];
	pivo_indice = inicio;
	
	for(i = inicio; i < fim; i++)
	{
		if(vetorNum[i] <= pivo)
		{
			troca(i, pivo_indice);
			pivo_indice++;
		}
	}
	
	troca(pivo_indice, fim);
	
	return pivo_indice;
}
//funcionando
int particiona_random(int inicio, int fim)
{
	int pivo_indice = (rand() % (fim - inicio + 1)) + inicio;
	
	troca(pivo_indice, fim);
	return particiona(inicio, fim);
}
//funcionando
void quick_sort(int inicio, int fim)
{
	if(inicio < fim)
	{
		int pivo_indice = particiona_random(inicio, fim);
		
		quick_sort(inicio, pivo_indice - 1);
		quick_sort(pivo_indice + 1, fim);
	}
}
//funcionando
void merge(int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
      L[i] = vetorNum[l + i];
    for (j = 0; j < n2; j++)
      R[j] = vetorNum[m + 1 + j];
 
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vetorNum[k] = L[i];
            i++;
        }
        else {
            vetorNum[k] = R[j];
            j++;
        }
        k++;
    }
  
    while (i < n1) {
        vetorNum[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        vetorNum[k] = R[j];
        j++;
        k++;
    }
}
//funcionando 
void mergeSort(int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
 
        mergeSort(l, m);
        mergeSort(m + 1, r);
 
        merge(l, m, r);
    }
}
//funcionando
void exibir(int qntNum) {
  int i;
  if (qntNum != 0) { 
    printf("Vetor de números: ");
    for (i = 0; i < qntNum; i++) {
      if (i < qntNum - 1) {
        printf("%d, ", vetorNum[i]);
      }
      else {
        printf("%d\n", vetorNum[i]);
      }
    }
  }
  else {
    printf("O vetor não está preeenchido!");
  }
}

void menu() {
  int escolha, qntEscolha = 0, qntNum = 0, numBusca, resultBusca = -1;

  do {
    printf("Digite sua escolha!\n");
    printf("[1] Quantidade de números aleatório\n");
    printf("[2] Exibir\n");
    printf("[3] Ordenar em ordem crescente - QuickSort\n");
    printf("[4] Ordenar em ordem crescente - MergeSort\n");
    printf("[5] Busca - linear\n");
    printf("[6] Buscar - Bubble Sort\n");
    printf("[7] Sair\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    gets();
    system("clear");

    switch (escolha) {
    case 1:
      printf("Quantos números aleatórios você quer? ");
      scanf("%d", &qntEscolha);
      tamanhoVetor = qntEscolha - 1;
      for (int i = 0; i <= qntEscolha; i++) {
        vetorNum[i] = rand() % 100 + 1;
      }
      break;
    case 2:
      exibir(tamanhoVetor + 1);
      break;
    case 3:
      quick_sort(0, tamanhoVetor);
      printf("Ordenado em ordem crescente - QuickSort!");
      break;
    case 4:
      mergeSort(0, tamanhoVetor);
      printf("Ordenado em ordem crescente - MergeSort!");
      break;
    case 5:
      printf("Qual número você procura? ");
      scanf("%d", &numBusca);
      resultBusca = buscaNum(numBusca, tamanhoVetor);
      if (resultBusca == -1) {
        printf("Não encontrado.\n");
      } else {
        printf("Encontrado na posição %d do vetor\n", resultBusca);
      }
      break;
    case 6:
      printf("Qual número você procura? ");
      scanf("%d", &numBusca);
      resultBusca = buscaNum(numBusca, tamanhoVetor);
      if (resultBusca == -1) {
        printf("Não encontrado.\n");
      } else {
        printf("Encontrado na posição %d do vetor\n", resultBusca);
      }
      break;
    case 7:
      break;
    default:
      printf("Escolha uma opção válida\n\n");
      break;
    }
    printf("\n");
  if (escolha == 2) {
    system("sleep 5");
  }
  else if (escolha > 2 && escolha != 7){
    system("sleep 2"); 
  }
  system("clear");
  } while (escolha != 7);
}