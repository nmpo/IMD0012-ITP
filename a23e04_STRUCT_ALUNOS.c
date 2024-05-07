/* Nathan e Theo - Aula 23 parte 1: questão 04

4)  Crie  uma  estrutura  representando  os  alunos  de  um  determinado  curso.  A  estrutura
deve  conter  a  matricula  do  aluno,  nome,  nota  da  primeira  prova,  nota  da  segunda
prova  e  nota  da  terceira  prova.  
	a. Permita  ao  usuário  entrar  com  os  dados  de  5  alunos.  
	b. Encontre  o  aluno  com  maior  nota  da  primeira  prova.  
	c. Encontre  o  aluno  com  maior  média  geral.  
	d. Encontre  o  aluno  com  menor  média  geral  
	e. Para  cada  aluno  diga  se  ele  foi  aprovado  ou  reprovado,  considerando  o  valor
  6  para  aprovação.  

*/

#include <stdio.h>
#include <string.h>

//estrutura de cadastro dos alunos
typedef struct{ 
  char cadastro[20];
  char nome[50];
  float nota1;
  float nota2;
  float nota3;
} Alunos;
/*****************************************************************************************/
//função busca a maior onde de i até o quinto aluno dentro do laço for
//se o aluno i for maior que o x se sobrescreve o valor de x
int busca_maior_nota1(Alunos alunos[5]) {
  int x = 0;

  for(int i = 1; i < 5; i++) {
    if(alunos[x].nota1 < alunos[i].nota1) {
      x = i;
    }
  }

  return x;
}
/*****************************************************************************************/
//função busca a maior media, similar ao anterior, pega-se a cada media
//e substitui-se a cada comparação com a próxima média do aluno seguinte
int busca_maior_media(Alunos alunos[5]) {
  int x = 0;
  float maiormed = alunos[x].nota1 + alunos[x].nota2 + alunos[x].nota3;

  for(int i = 1; i < 5; i++) {
    float aluno_media = alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3;

    if(maiormed < aluno_media) {
      x = i;
      maiormed = aluno_media;
    }
  }

  return x;
}
/*****************************************************************************************/
//mais similiar ainda, temos a busca pela menor media, igualmente construído
//equiparando as médias conseguintes
int busca_menor_media(Alunos alunos[5]) {
  int x = 0;
  float maiormed = alunos[x].nota1 + alunos[x].nota2 + alunos[x].nota3;

  for(int i = 1; i < 5; i++) {
    float aluno_media = alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3;

    if(maiormed > aluno_media) {
      x = i;
      maiormed = aluno_media;
    }
  }

  return x;
}
/*****************************************************************************************/
//imprime o resultado para cada um dos 5 alunos se obtiverem a média necessária
void resultados(Alunos alunos[5]) {
  for(int i = 0; i < 5; i++) {
    float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;

    printf("Aluno %d: %s \n", i+1, media >=6 ? "Aprovado!" : "Reprovado!");
  }
}
/**************************************************************************/

int main() {
  Alunos alunos[5];
  int aluno_maior_nota1, aluno_maior_media, aluno_menor_media;

  //laço for destinado a entrada de dados para alimentar a estrutura Alunos
  for (int i = 0; i < 5; i++) {
    printf("Digite a matricula do aluno %d: ", i+1);
    setbuf(stdin, NULL);
    fgets(alunos[i].cadastro, 20, stdin);

    printf("\n");

    printf("Digite o nome do aluno %d: ", i+1);
    setbuf(stdin, NULL);
    fgets(alunos[i].nome, 50, stdin);

    printf("\n");

    printf("Digite a primeira nota do aluno %d: ", i+1);
    scanf("%f", &alunos[i].nota1);

    printf("Digite a segunda nota do aluno %d: ", i+1);
    scanf("%f", &alunos[i].nota2);

    printf("Digite a terceira nota do aluno %d: ", i+1);
    scanf("%f", &alunos[i].nota3);

    printf("\n");
  } 

  //criou-se variáveis para receber o retorno das funções de médias e notas
  aluno_maior_nota1 = busca_maior_nota1(alunos);
  aluno_maior_media = busca_maior_media(alunos);
  aluno_menor_media = busca_menor_media(alunos);

  printf("\n");

  printf("O aluno com maior nota da prova 1 é o: %d \n", aluno_maior_nota1 + 1);
  printf("O aluno com maior media é o %d \n", aluno_maior_media + 1);
  printf("O aluno com menor media é o %d \n", aluno_menor_media + 1);

  //para a função do tipo void apenas realizamos o chamamento
  resultados(alunos);

  return 0;
}
