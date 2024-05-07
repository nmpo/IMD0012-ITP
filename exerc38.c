#include <stdio.h>
#define cp 4
int main (){

	int v1[2] = {};
	int v2[2] = {};
	int loc[4][4];
	int MaiorIJ, MenorIJ;

	printf("Digite os valores da sua primeira matriz 4x4: \n");
	for (int i = 0; i < cp; i++)
		for (int j = 0; j < cp; j++)
			scanf("%d", &loc[i][j]);

	MenorIJ = loc[0][0];
	MaiorIJ = MenorIJ;

	for (int i = 0; i < cp; i++){
		for (int j = 0; j < cp; j++){
			printf("%d \t", loc[i][j]);
			if(loc[i][j] > MaiorIJ){
				MaiorIJ = loc[i][j];
				v1[0] = i;
				v1[1] = j;
			}
			else if(MenorIJ > loc[i][j]){
				MenorIJ = loc[i][j];
				v2[0] = i;
				v2[1] = j;
			}
		}
		printf("\n");

	}

	printf("O maior termo e sua localização são, respectivamente: %d e i = %d j = %d. \n", MaiorIJ, v1[0]+1, v1[1]+1);
	printf("O menor termo e sua localização são, respectivamente: %d e i = %d j = %d. \n", MenorIJ, v2[0]+1, v2[1]+1);






	return 0;
}