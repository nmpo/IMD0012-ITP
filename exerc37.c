#include <stdio.h>
#include <math.h>

int main()
{
	int linhas = 4, colunas = 4;

	for (int i = 1; i <= linhas; i++){
		for (int j = 1; j <= colunas; j++){
			printf("%d \t", i*j);
		}
		printf("\n");
	}
	return 0;
}
