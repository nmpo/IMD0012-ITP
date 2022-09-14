/* Nathan e Theo - Aula 26: questão 07

7) Faca  um  programa  que  leia  três  valores  inteiros  e  chame  uma  função  que  receba
estes  3  valores  de  entrada  e  retorne  eles  ordenados,  ou  seja,  o  menor  valor  na
primeira  variável,  o  segundo  menor  valor  na  variável  do  meio,  e  o  maior  valor
na última  variável.    
	• A   função   deve   retornar   o   valor   1   se   os   três   valores   forem   iguais
e 0 se existirem  valores  diferentes.    
	• Exibir  os  valores  ordenados  na  tela.  

*/

#include <stdio.h>

/*a função troca de valores recebe 3 variáveis (ponteiro) como parametros
com o objetivo de que quaisquer alterações feitas nas variaveis sejam também alteradas
no seu endereço de memória, desta forma, se na função principal imprimirmos as três
variáveis elas estarão modificadas de acordo com as alterações feitas nessa função */
int troca_de_valores(int *n1, int *n2, int *n3) {
  //o uso dos auxiliares se deu pela precaução de não perder as informações anteriores
  //de cada variável após as permutações
  int aux_n1 = *n1, aux_n2 = *n2, aux_n3 = *n3;

  //de agora em diante serão utilizados 'if's com as condições de comparação entre as três
  //variáveis, se tal número é menor que os outros dois (num2 e num3) ele irá para o endereço do número 1
  //e seguindo a linha de raciocínio para o segundo e terceiro lugar desta sequência
  if (*n1 < *n2 && *n1 < *n3) {
    if (!(*n2 < *n3)) {
      *n2 = aux_n3;
      *n3 = aux_n2;
    }
    //idem raciocínio caso o número 2 seja menor que os outros dois números (num1 e num3)
  } else if (*n2 < *n1 && *n2 < *n3) {
    if (*n1 < *n3) {
      *n2 = aux_n1;
      *n3 = aux_n3;
    } else {
      *n2 = aux_n3;
      *n3 = aux_n1;
    }

    *n1 = aux_n2;
  //idem raciocínio caso o número 3 seja menor que os outros dois números (num1 e num2)
  } else {
    if (*n1 < *n2) {
      *n2 = aux_n1;
      *n3 = aux_n2;
    } else {
      *n2 = aux_n2;
      *n3 = aux_n1;
    }

    *n1 = aux_n3;
  }

  if (*n1 == *n2 && *n1 == *n3 && *n2 == *n3) return 1;

  return 0;
}

int main() {
  int num1, num2, num3;

  printf("Digite os três números separados por um espaço: \n");
  scanf("%d %d %d", &num1, &num2, &num3);

  troca_de_valores(&num1, &num2, &num3);

  printf("[%d]-[%d]-[%d]\n", num1, num2, num3);

  return 0;
}
