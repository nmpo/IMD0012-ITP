/* Nathan e Theo - Aula 11: questão 12

12)  Faca um programa que leia um numero inteiro positivo par N e imprima todos os números pares
de 0 até N em, primeiro em ordem crescente e depois em ordem decrescente. O programa deve repetir
a pergunta do número, caso ele  não seja par, até que seja informado corretamente. Terminar a
execução  quando o valor informado for 0.

*/

#include <stdio.h>


int main() {
  int num_par;

  //laço while enquanto o valor informado nao for 0
  do {
    //entrada dos dados
    printf("Digite um número: ");
    scanf("%d", &num_par);

    //condição if para saber se o número é par
    if (num_par % 2 == 0) {
      printf("\n");
      printf("Crescente\n");
      //laço for de 0 até menor ou igual (em ordem crescente) o valor de entrada, acrescentando i a cada for
      for (int i = 0; i <= num_par; i++) {
        //se o número i for par, imprime-se, caso não, próximo
        if (i % 2 == 0) {
          printf("%d\n", i);
        }
      }

      printf("\nDecrescente\n");
      //laço for do valor de entrada até maior ou igual (em ordem crescente) que o j, descrescendo j a cada for
      for (int j = num_par;  j >= 0 ; j--) {
        //se o número j for par, imprime0se, caso não, próximo
        if (j % 2 == 0) {
          printf("%d\n", j);
        }
      }

      printf("\n");
      //caso o número não seja par, informa-se o valor inválido
    } else {
      printf("O número informado não é par. Digite novamente um valor válido.\n\n");
    }
    //o laço se repetirá até que o usuário informe 0 quando solicitado o número
  } while (num_par);

  return 0;
}
