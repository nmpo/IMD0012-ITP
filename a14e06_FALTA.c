/* Nathan e Theo - Aula 14: questão 06

6)   Leia  um  vetor  com  20  números  inteiros.  Escreva  os  elementos
do  vetor  eliminando  os  elementos  repetidos. 

*/

#include <stdio.h>

//int verifica(int i, int ) 



int main(){
	int vet_principal[5], vet_aux[5], resultado[5], aux_result, i, j, k, w, q;

	for(i=0; i < 5; ++i){
		printf("Digite o elemengo %d do seu vetor: ", i+1);
		scanf("%d", &vet_principal[i]);
		vet_aux[i] = vet_principal[i];
	}
	aux_result = 0;

	for (int k = 0; k < 5; ++k){
		w = 0;
		while(vet_principal[k] != vet_aux[w] && w < 5){
			w=w+1;
		}
		if(w >= 5){
			q=0;
			while(q <= aux_result && vet_principal[k] != vet_aux[q]){
				q=q+1;
			}
			if(q >= aux_result){
				resultado[aux_result] = vet_principal[k];
				aux_result=aux_result+1;
			}
		}
	}
	for (int i = 0; i < aux_result; ++i){
		printf("%d ", resultado[i]);
	}





	return 0;
}

