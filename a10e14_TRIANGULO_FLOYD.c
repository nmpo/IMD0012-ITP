/* Nathan e Theo - Aula 10: questão 14

14)  Escreva  um  programa  que  leia  um  numero  inteiro  positivo  N  e  em  seguida  imprima
N linhas  do  chamado  Triangulo  de  Floyd.  Dica:  utilizar  laços  de  repetição  aninhados.

*/

#include <stdio.h>


int main() {
  int num_int, aux = 1;

  //entrada do número para linhas do triangulo de Floyd
  printf("Digite um número: ");
  scanf("%d", &num_int);

  //um laço for que repita de i até o número: para definir o número de linhas
  for (int i = 0; i <= num_int; i++) {
    //outro laço for de j até i: para que sejam acrescido ao número para o formato de um triangulo
    for(int j = 0; j < i; j++) {
    //imprime a variavel que auxilia nesse incremento ++ no j
      printf("%d ", aux++);
    }
    printf("\n");
  }

  return 0;
}
