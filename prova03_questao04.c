#include <stdio.h>

int padraoMatriz(int tamanho, int matriz[tamanho][tamanho]){
	int qntdNumL = 0;
	int qntdNumC = 0;
	for (int i = 0; i < tamanho; i++){
		for (int j = 0; j < tamanho; j++){
			if (matriz[i][j] != 0){
				qntdNumL++;
			}
		if(matriz[i][j] != 0){
			qntdNumC++;
		}
	}
	if(qntdNumL || qntdNumC > 1){
		return 0;
	}
	else{
		return 7;
	}
}