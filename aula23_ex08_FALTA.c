/* Nathan e Theo - Aula 23 parte 1: questão 08

8.   Faça   um   programa   que   leia   os   dados   de   10   alunos
(Nome,   matricula,   Média   Final),  armazenando   em   um   vetor.
Uma   vez   lidos   os   dados,   divida   estes   dados   em   2   novos
vetores,  o  vetor  dos  aprovados  e  o  vetor  dos  reprovados,
considerando  a  média  mínima  para  a  aprovação  como  sendo  5.0.
Exibir  na  tela  os  dados  do  vetor  de  aprovados,  seguido  dos  dados
do  vetor  de  reprovados. 

*/

#include <stdio.h>

typedef struct{
  char matricula[20];
  char nome[50];
  float media_final;
} Alunos;

void resultado(Alunos alunos[5]) {
	int aprovados[10], reprovados[10];
  	for(int i = 0; i < 5; i++) {
  		if (alunos[i].media_final >= 5.0)
  			aprovados[i] = i;
    	//float media_final = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;

  	}	printf("\nAPROVADOS =");
  	for(int j = 0; j < 5; j++){
  		printf(" %d,", aprovados[j]);
  	}
}

int main() {
  Alunos alunos[5];

  //laço for destinado a entrada de dados para alimentar a estrutura Alunos
  for (int i = 0; i < 5; i++) {
    printf("Digite a matricula do aluno %d: ", i+1);
    setbuf(stdin, NULL);
    fgets(alunos[i].matricula, 20, stdin);

    printf("\n");

    printf("Digite o nome do aluno %d: ", i+1);
    setbuf(stdin, NULL);
    fgets(alunos[i].nome, 50, stdin);

    printf("\n");

    printf("Digite a média final do aluno %d: ", i+1);
    scanf("%f", &alunos[i].media_final);

    printf("\n");
  } 
  resultado(alunos);

  return 0;

 }
