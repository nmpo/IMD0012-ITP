#include <stdio.h>
#include <math.h>
#define cp 5

int main()
{
	int tri_inf[5][5];

	printf("Digite os valores da sua matriz 5x5: \n");
	for (int i = 0; i < cp; i++)
		for (int j = 0; j < cp; j++)
			scanf("%d", &tri_inf[i][j]);

	for (int i = 0; i < cp; i++){
		for (int j = 0; j < cp; j++){
			printf("%d \t", tri_inf[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < cp; i++){
		for (int j = 0; j < cp; j++){
			if(i==j || i > j)
				printf("%d \t", tri_inf[i][j]);
			else
				printf("0 \t");
		}
		printf("\n");
	}
	return 0;
}