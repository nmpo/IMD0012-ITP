/* Nathan e Theo - Aula 16: questão 16

16) Escreva um programa que leia um numero inteiro positivo N e criei uma  função que imprima N
linhas do chamado Triangulo de Floyd. Dica: utilizar laços de repetição aninhados. (Problema já
resolvido sem funções na Aula 10-­exercício 14). 

*/

#include <stdio.h>

//criada a função com o mesmo objetivo da questão 14 da aula 10
//o tipo da função se dá pelo motivo da função não retornar nada, só imprimir os números do triangulo
void triangulo_floyd(int num){
  //variável auxiliar para impressão dos números
  int aux = 1;

  //primeiro for para formação das linhas na mesma quantidade do número de entrada
  //o segundo for tem objetivo de imprimir os números incrementados de 1
  //com quantidade de algorismos para formar o triângulo
  for (int i = 0; i < num; i++){
    for (int k = 0; k < i; k++){
      printf("%d ", aux++);
    }
    printf("\n");
  }
  return;
}


int main() {

  int num;
  //entrada de dados
  printf("Digite um número inteiro: ");
  scanf("%d", &num);

  printf("\n");

  //chama a função criada antes da função principal com a entrada do número digitado pelo usuário
  //printf("%", triangulo_floyd(num));
  triangulo_floyd(num);

  return 0;
}
