/* Nathan e Theo - Aula 16: questão 19

19) Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas com um 
determinado símbolo também passado por parâmetro. 

*/

#include <stdio.h>

//função criada tipo void que recebe o número e o simbolo que será dado como saída
void triangulo_floyd_simbolo(int num, char simbolo){
	//com mesmo objetivo do triangulo de floyd só que agora com caracteres de entrada
	for (int i = 1; i <= num; i++) {
    	for (int j = 0; j < i; j++) {
    		//para cada numero incrementado que apareceria nas n linhas, substitui-se pelo determinado simbolo
     		 printf("%c ", simbolo);
    	}

    	printf("\n");
  	}
  	return;
}

int main() {

  	int num;
  	char simbolo;

  	//entrada do número das n linhas
  	printf("Digite um número: ");
  	scanf("%d", &num);

  	//entrada do caractere que será gerado como saída
  	printf("Digite um simbolo: ");
  	scanf(" %c", &simbolo);

  	// "chamamento" da função para realizar a tal substituição dos caracteres
  	triangulo_floyd_simbolo(num, simbolo);

  return 0;
}