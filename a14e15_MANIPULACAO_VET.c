/* Nathan e Theo - Aula 14: questão 15

15)  Leia  dois  vetores  de  inteiros  x  e  y,  cada  um  com  5  elementos  (assuma  que  o  usuário  
não  informa  elementos  repetidos  dentro  do  mesmo  vetor,  ou  seja,  dentro  de  x  não  
podem  ter  valores  repetidos  e  dentro  de  y  também  não).  Calcule  e  mostre  os  vetores  
resultantes  em  cada  caso  abaixo:  
	a. Soma  entre  x  e  y:  soma  de  cada  elemento  de  x  com  o  elemento  da  mesma  
posição  em  y.  
	b. Produto  entre  x  e  y:  multiplicação  de  cada  elemento  de  x  como  elemento  da  
mesma  posição  em  y.  
	c. Diferença  entre  x  e  y:  todos  os  elementos  de  x  que  não  existam  em  y.  
	d. Interseção  entre  x  e  y:  apenas  os  elementos  que  aparecem  nos  dois  vetores.  
	e. União  entre  x  e  y

*/

#include <stdio.h>

int main(){
	//foi criado vetores para cada respectiva proposta pedida
	int vetor_X[5], vetor_Y[5], vetor_soma[5], vetor_produto[5], vetor_dif[5], vetor_igual[5], vetor_uniao[10];
	int i, j, k, q, w, aux_dif, aux_igual, aux_uniao;
	//entrada de dados: para matriz X
	for (int i = 0; i < 5; ++i){
		printf("Digite o elemento %d do seu primeiro vetor: ", i+1);
		scanf("%d", &vetor_X[i]);
	}
	//entrada de dados: para matriz Y
	for (int i = 0; i < 5; ++i){
		printf("Digite o elemento %d do seu segundo vetor: ", i+1);
		scanf("%d", &vetor_Y[i]);
	}
	//criei os auxiliares para ajudar na hora da contagem do tamanho dos vetorers resultantes
	aux_uniao = 0;
	aux_igual = 0;
	aux_dif = 0; 
	//soma X e Y////////////////////////////////////////////////////////////////////
	printf("\nSOMA = ");
	for (int k = 0; k < 5; ++k){
		vetor_soma[k] = vetor_X[k]+vetor_Y[k];
		printf("%d ", vetor_soma[k]);
	}
	//produto X e Y/////////////////////////////////////////////////////////////////
	printf("\nPRODUTO = ");
	for (int k = 0; k < 5; ++k){
		vetor_produto[k] = vetor_X[k]*vetor_Y[k];
		printf("%d ", vetor_produto[k]);
	}
	//diferença X e Y, elementos de X que não estejam em Y//////////////////////////
	for (int k = 0; k < 5; ++k){
		w = 0;
		while(vetor_X[k] != vetor_Y[w] && w < 5){
			w=w+1;
		}
		if(w >= 5){
			q=0;
			while(q <= aux_dif && vetor_X[k] != vetor_dif[q]){
				q=q+1;
			}
			if(q >= aux_dif){
				vetor_dif[aux_dif] = vetor_X[k];
				aux_dif=aux_dif+1;
			}
		}
	}
	printf("\nDIFERENÇA = ");
	for (int i = 0; i < aux_dif; ++i){
		printf("%d ", vetor_dif[i]);
	}
	//interseção, elementos que apareçam nos dois vetores//////////////////////////
	for (k = 0; k < 5; k++){
		i = 0;
		while (i < 5 && vetor_X[k] != vetor_Y[i]){
			i++;
		}
		if(i < 5){
			j = 0;
			while(j < aux_igual && vetor_igual[j] != vetor_X[k]){
				j++;
			}
			if(j >= aux_igual){
				vetor_igual[aux_igual] = vetor_X[k];
				aux_igual++;
			}
		}
	}


	printf("\nINTERSECÇÃO = ");
	for (int i = 0; i < aux_igual; ++i){
		printf("%d ", vetor_igual[i]);
	}
	
	//união de X e Y///////////////////////////////////////////////////////////////
	for (int k = 0; k < 5; ++k){
		w = 0;
		while(w < aux_uniao && vetor_X[k] != vetor_uniao[w]){
			w=w+1;
		}
		if (w >= aux_uniao){
			vetor_uniao[aux_uniao]=vetor_X[k];
			aux_uniao=aux_uniao+1;
		}
	}
	for (int k = 0; k < 5; ++k){
		q = 0;
		while(q < aux_uniao && vetor_Y[k] != vetor_uniao[q]){
			q=q+1;
		}
		if (q >= aux_uniao){
			vetor_uniao[aux_uniao]=vetor_Y[k];
			aux_uniao=aux_uniao+1;
		}
	}
	printf("\nUNIÃO = ");
	for (int i = 0; i < aux_uniao; i++){
		printf("%d ", vetor_uniao[i]);
	}

	printf("\n");








	return 0;
}