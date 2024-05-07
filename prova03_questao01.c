#include <stdio.h>

int nulaMatriz(int n, int m, int matriz[n][m], int *nCNulas, int *nLNulas){
	
	int auxnC = 0;
	int auxnL = 0;
	for (int k = 0; k < n; k++){
		for (int h = 0; h < m; h++){
			auxnL = 0;
			if(matriz[k][h] == 0){
				auxnL++;
			}
		}
		if(auxnL == m-1){
			nLNulas++;
		}
	}
	for (int k = 0; k < n; k++){
		for (int h = 0; h < m; h++){
			auxnL = 0;
			if(matriz[h][k] == 0){
				auxnC++;
			}
		}
		if(auxnC == n-1){
			nCNulas++;
		}
	}
	//para ver se encontramos algum algoristmo que não seja 0 para invalidar
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (matriz[i][j] =! 0){
				return 0;
			}
		}
	return 1;
	}
}