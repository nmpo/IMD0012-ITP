/* Questão  1:  As  matrizes  abaixo  apresentam  um  determinado
padrão.
Escreva   uma   FUNÇÃO   que   receba   uma   matriz   quadrada
(n   x   n)   de   qualquer  tamanho  e  retorne  1  (inteiro)
caso  encontre  o  padrão  acima  e  0  (inteiro)  caso  o  padrão  
não  esteja  presente.    
  
Pontos  extras:    
1. Responder  a  questão  acima  usando  alocação  dinâmica  de
memória  e  notação  de  vetores  para  acesso  aos  elementos.  
2. Responder  a  questão  acima  usando  notação  de  ponteiros
para  acesso aos  elementos. 

*/

#include <stdio.h>

int padraoMatriz(int tamanho, int matriz[tamanho][tamanho]){
	for (int i = 0; i < tamanho; i++){
		for (int j = 0; j < tamanho; j++){
			if (matriz[i][j] != i+i){
				return 0;
			}
		}
	return 1;
}