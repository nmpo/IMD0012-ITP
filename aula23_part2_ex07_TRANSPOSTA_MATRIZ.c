/* Nathan e Theo - Aula 23 parte 2: questão 07

7.   Leia   uma   matriz   de   3 x 3 elementos. Calcule e imprima a sua transposta. Matriz 
transposta  é  a  matriz  que  se  obtém  da  troca  de  linhas  por  colunas.    

*/

#include <stdio.h>

int main (){
	//declaramos uma matriz de 3 linhas e 3 colunas
	int matriz[3][3];

	//entrada de dados: o usuário digita os algorismos para construir sua matriz quadrada
	//com o scanf associado com ao laço de repetição for para que os 9 itens sejam atribuídos
	printf("Digite os valores da sua primeira matriz 3x3: \n");
	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			scanf("%d", &matriz[i][j]);
		}
	}
	//a fim de comparação com a mastriz transporta final, imprimimos a matriz original resultante
	//da entrada de dados na estrutura for acima
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d \t", matriz[i][j]);
		}
		printf("\n");
	}
	//pular uma linha para clareza na comparação das duas matrizes
	printf("\n");

	//impressão da matriz transposta, para isso trocou-se os índices de cada elemento da
	//matriz original para que as linhas fossem trocadas pelas colunas, a chamada transposição
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d \t", matriz[j][i]);
		}
		printf("\n");
	}




	return 0;
}
