#include <stdio.h>
#define cp 5


int main (){
	int search[5][5], x;
	int v1[2] = {};
	int aux;
	
	printf("Digite um valor para X: \n");
	scanf("%d", &x);

	printf("Agora, digite os valores da sua primeira matriz 4x4: \n");
	for (int i = 0; i < cp; i++)
		for (int j = 0; j < cp; j++)
			scanf("%d", &search[i][j]);


	for (int i = 0; i < cp; i++){
		for (int j = 0; j < cp; j++){
			if(search[i][j] == x){
				v1[0] = i;
				v1[1] = j;
			}
			else
				aux = 0;//INCOMPLETO
		}
		printf("\n");
	}

	printf("")




	return 0;
}