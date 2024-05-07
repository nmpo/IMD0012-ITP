/*Questão  3  (1.5  pts):  Reescreva  a  função  iterativa  abaixo
em  forma  recursiva.  OBS:  o  resultado  (printf)  deve  ser
exatamente  o  mesmo  da  função  interativa. */

#include <stdio.h>


void funcRecursiva(int n){
	if(n > -2){
		printf("%d\n", n);

		if(n % 2){
			funcRecursiva(n + 1);
		} else {
			funcRecursiva(n - 3);
		}
	}
}

int main(){

	funcRecursiva(3);

	return 0;
}