#include <stdio.h>
#include <math.h>

int main()
{
	int id[5][5];
	int linhas = 5, colunas = 5;

	for (int i = 0; i < linhas; i++){
		for (int j = 0; j < colunas; j++){
			if(i==j)
				printf("1 \t");
			else
				printf("0 \t");
		}
		printf("\n");
	}
	return 0;
}