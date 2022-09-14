/* Nathan e Theo - Aula 26: questão 13

13.  Crie  uma  função  para  somar  dois  vetores.  Esta  função  deve  receber  dois  vetores
e  retornar  a  soma  em  um  terceiro  vetor.    
	• Caso  o  tamanho  do  primeiro  e  segundo  vetor  seja  diferente  então  a  função  
retornará  ZERO  (0).    
	• Caso  a  função  seja  concluída  com  sucesso  a  mesma  deve  retornar  o  valor  
UM  (1).    
	• Utilize  aritmética  de  ponteiros  para  manipulação  do  vetor.  

*/

#include <stdio.h>

//criou-se uma função para soma de dois vetores que retorne a soma em um terceiro vetor
int soma_vetores(int *vetor1, int tam1, int *vetor2, int tam2, int *vetor3) {
  //a primeira condição para que haja a soma é a igualdade de tamanho entre os dois
  //vetores de entrada. caso contrário, a função retornará zero
  if (tam1 != tam2) return 0;

  //declarado as variaveis auxiliares dos três vetores para ajudar na hora da soma de
  //de cada elemento respectivo nos três arranjos
  int *aux_v1 = vetor1, *aux_v2 = vetor2, *aux_v3 = vetor3;

  //
  for (int i = 0; i < tam1; i++) {
    *aux_v3 = *aux_v1 + *aux_v2;
    aux_v1++;
    aux_v2++;
    aux_v3++;
  }

  return 1;
}

int main() {
  //definimos três para receber os dados de entrada
  int vetor1[50], vetor2[50], vetor3[50];
  //a variavel resultado irá receber o retorno da função para validar a operação caso o
  //tamanho dos dois vetores sejam iguais
  int resultado, tam1, tam2;

  //entrada de dois dados para o primeiro vetor: a quantidade de elementos e cada elemento
  printf("Digite a quantidade de elementos do seu primeiro vetor: \n");
  scanf("%d", &tam1);
  printf("Digite os %d valores do seu primeiro vetor: \n", tam1);
  for (int i = 0; i < tam1; ++i){
      scanf("%d", &vetor1[i]);
  }
  //entrada de dois dados para o segundo vetor: a quantidade de elementos e cada elemento
  printf("Digite a quantidade de elementos do seu segundo vetor: \n");
  scanf("%d", &tam2);
  printf("Digite os %d valores do seu segundo vetor: \n", tam2);
  for (int i = 0; i <tam2; ++i){
    scanf("%d", &vetor2[i]);
  }

  //resultado recebe o retorno da função de soma, 0 caso sejam de tamangos diferentes
  //e 1 caso os vetores tenham tamanho iguais
   resultado = soma_vetores(vetor1, tam1, vetor2, tam2, vetor3);

   //utilizado um if com as duas condições já ditas retornadas da função e atribuidas
   //à variável 'resultado'
  if (resultado == 0) {
    printf("Os vetores possuem tamanhos diferentes. Tente outra vez!\n");
  }else{
    for(int i = 0; i < tam1; i++) {
      printf("vetor3[%d]=%d\n", i + 1, vetor3[i]);
    }
  }

  return 0;
}
