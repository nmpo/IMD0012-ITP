/* Nathan e Theo - Aula 14: questão 08

8) Faça um programa que receba do usuário dois vetores, A e B, com X números inteiros cada
(solicitar ao usuário o número X, definir como máximo 20 elementos). Crie um novo  vetor
 denominado C calculando C = A(ordem   direta) – B(ordem invertida). Mostre na tela os dados
 do vetor C.  

*/

#include <stdio.h>


int main() {
	//definindo os três vetores A e B, e o C para saída
  	int tam, a[20], b[20], c[20];

  	//entrada de dados: tamanho dos vetores
  	printf("Digite o tamanho dos vetores: \n");
  	scanf("%d", &tam);

  	//entrada de dados: valor dos vetores
  	//vetor A
  	for (int i = 0; i < tam; ++i){
  		printf("Digite um valor para o vetor A: \n");
  		scanf("%d", &a[i]);
  	}

  	//vetor B
  	for (int j = 0; j < tam; ++j){
  		printf("Digite um valor para o vetor B: \n");
  		scanf("%d", &b[j]);
  	}
  	printf("\n");
  	//fazendo dentro do laço for a ordem direta (i++) e a ordem invertida (j--)
  	//até o tamanho informado dos vetores que foi informardo
  	for (int k = 0, g = tam-1; k < tam; k++, g--) {
  		//a soma de cada posição dos vetores A e B para a mesma posição do vetor C
    	c[k] = a[k] + b[g];
    	printf("%d\t", c[k]);
  }
  printf("\n\n");
  return 0;
}
