/* Nathan e Theo - Aula 16: questão 08

8) Faça um algoritmo que receba um número inteiro positivo n e calcule o  seu  fatorial, n!. O
fatorial de um número é calculado pela multiplicação desse número por todos os seus  antecessores
até chegar ao número 1 (o zero (0) é  excluído).  

*/

#include <stdio.h>

//criou-se uma função para fazer a fatorial
int fatorial(int num){
	//declara-se a variavél de resposta a 1 antes da fatoração iniciar
	int total = 1;

	//a partir do número 2 (já que multiplicado por 1 tem-se o mesmo número) vai multiplicando o
	//valor atribuido à variável total a cada laço for quando multiplicado pelo i
  	for (int i = 2; i <=num; i++){
    	total *= i;
  	}
  	//o retorno da função é o valor total
  	return total;
}

int main() {
	int num;

	//entrada de dados: número para fatoração
	printf("Digite o número para cálculo da fatorial: \n");
	scanf("%d", &num);
  	
  	//imprime a resposta do fatorial chamando a função criada antes da função main
  	printf("fatorial de %d! = %d\n", num, fatorial(num));
  	return 0;
}

