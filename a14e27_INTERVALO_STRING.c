/* Nathan e Theo - Aula 14: questão 27

27)  Escreva   um   programa   que   recebe   uma   string   S   e   inteiros
não-­negativos   I   e   J.   O programa  deve  imprimir  o  segmento  da
string  S  entre  [I..J].  Exemplo:  se  a  entrada  for  “Rio  grande
do  Norte”  e  os  inteiros  4  e  9,  imprimir  “grande”.    

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	//definição das variaveis necessarias, sendo criada um vetor de string e nao uma string
	int I, J;
	char palavra[20];

	//entrada de dados: solicitado ao usuário digitar a palavras e dois número não negativos
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	printf("Digite agora o intervalo de I e J, respectivamente, separados por espaço: ");
	scanf("%d %d", &I, &J);

	//imprime o vetor string de de I-1 (pela posição vetorial do caractere) até o J
	for (int k = I-1; k < J; ++k){
		printf("%c", palavra[k]);
	}
	printf("\n");














	return 0;
}