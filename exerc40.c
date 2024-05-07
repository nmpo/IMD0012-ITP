#include <stdio.h>
#define cp 3

int main (){

	int transposta[3][3];

	printf("Digite os valores da sua primeira matriz 3x3: \n");
	for (int i = 0; i < cp; ++i){
		for (int j = 0; j < cp; ++j){
			scanf("%d", &transposta[i][j]);
		}
	}
	for (int i = 0; i < cp; i++){
		for (int j = 0; j < cp; j++){
			printf("%d \t", transposta[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < cp; i++){
		for (int j = 0; j < cp; j++){
			printf("%d \t", transposta[j][i]);
		}
		printf("\n");
	}




	return 0;
}