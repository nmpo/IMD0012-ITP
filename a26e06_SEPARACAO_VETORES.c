/* Nathan e Theo - Aula 26: questão 06

6.   Faca  uma  função  que  receba  como  parâmetro  um  vetor  X  de  30  elementos  inteiros
e  retorne,  também  por  parâmetro,  dois  vetores  A  e  B.    
	• O  vetor  A  deve  conter  os  elementos  pares  de  X.  
	• O  vetor  B,  deverá  conter  os  elementos  ímpares.  

*/

#include <stdio.h>

//função do tipo void que não retorna nada, onde recebemos 3 vetores de parametros e o tamanho
//dos dois vetores que terão números pares e impares como saída
void separacao_vetores(int *vetor, int *vetor_a, int *vetor_b,
                             int *tam_a, int *tam_b) {
  //as variáveis ponteiro auxiliares recebem os vetores
  int *aux_a = vetor_a, *aux_b = vetor_b;

  for (int i = 0; i < 30; i++) {
    //se o elemento i do vetor principal tem resto nulo quando dividido por dois (par)
    if (vetor[i] % 2 == 0) {
      //a vetor auxiliar de A recebe o elemento
      *aux_a = vetor[i];
      //e o tamanho do vetor A incrementa mais um a cada elemento
      aux_a++;
      (*tam_a)++;
      //de forma análoga acontece para o vetor B
    } else {
      *aux_b = vetor[i];
      aux_b++;
      (*tam_b)++;
    }
  }
}


int main() {
  //definimos os três vetores com 30 elementos e inicialmente os vetores A e B com tamanho nulo
  int vetor[30], vetor_a[30], vetor_b[30], tamanho_a = 0, tamanho_b = 0;

  //entrada de dados: para as 30 posições do vetor principal
  for (int i = 0; i < 30; i++) {
    printf("Digite o elemento %d do vetor principal: ", i+1);
    scanf("%d", &vetor[i]);
  }

  //chamamento da função de separação do vetor principal em A e B (parametros)
  separacao_vetores(vetor, vetor_a, vetor_b, &tamanho_a, &tamanho_b);

  //impressão do vetor A
  printf("Vetor A: ");
  for (int k = 0; k < tamanho_a; k++) {
    printf("%d \t", vetor_a[k]);
  }
  printf("\n");

  //impressão do vetor B
  printf("Vetor B: ");
  for (int w = 0; w < tamanho_b; w++) {
    printf("%d \t", vetor_b[w]);
  }
  printf("\n");
  return 0;
}
