#include <stdio.h>
#include<math.h>
#define cp 4

int main(){
	int quadra[4][4];

	printf("Digite sua matriz 4x4: \n");
	for (int i = 0; i < cp; ++i){
		for (int j = 0; j < cp; ++j){
			scanf("%d", &quadra[i][j]);
		}
	}

	for (double i = 1; i <= cp; ++i){
		for (double j = 1; j <= cp; ++j){
			if(i < j)
				printf("%.1lf \t", 2*i + 7*j - 2);
			else if(i==j)
				printf("%.1lf \t", 3*pow(i, 2) - 1);
			else
				printf("%.1lf \t", 4*pow(i, 3) - 5*pow(j, 2) + 1);
		}
		printf("\n");
	}










	return 0;
}