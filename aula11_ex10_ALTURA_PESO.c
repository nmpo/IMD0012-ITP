/* Nathan e Theo - Aula 11: questão 10

10)  Faça  um  programa  que  receba  a  altura  e  o  peso  de  uma  pessoa.  De  acordo  com
a tabela  em anexo,  verifique  e  mostra  qual  a  classificação  dessa  pessoa.

TABELA:

|--ALTURA ---- | --------------------- PESO --------------------------|
               |    até 60        entre 60 e 90         acima de 90   |
menor que 1,20 |      A                 D                     G       |
de 1,20 a 1,70 |      B                 E                     H       |
maior que 1,70 |      C                 F                     I       |
|---------------------------------------------------------------------|

*/

#include <stdio.h>


int main() {
  //como os números não são inteiros e apresentam números decimais, declaramos float
  float altura, peso;

  //entrada dos dois principais parametros para o calculo
  printf("Digite a sua altura: ");
  scanf("%f", &altura);

  printf("Digite a seu peso: ");
  scanf("%f", &peso);

  //é imposta a primeira condição, a primeira da altura
  if (altura < 1.2) {
    //e assim são dadas as condições através do if sobre os pesos
    //e caso positivo se imprime a letra respectiva
    if (peso <= 60.0) {
      printf("A\n");
    } else if (peso <= 90) {
      printf("D\n");
    } else {
      printf("G\n");
    }
   //a segunda condição de altura 
  } else if (altura <= 1.7) {
    //e assim são dadas as condições através do if sobre os pesos
    //e caso positivo se imprime a letra respectiva
    if (peso <= 60.0) {
      printf("B\n");
    } else if (peso <= 90) {
      printf("E\n");
    } else {
      printf("H\n");
    }
    //a terceira condição de altura
  } else {
    //e assim são dadas as condições através do if sobre os pesos
    //e caso positivo se imprime a letra respectiva
    if (peso <= 60.0) {
      printf("C\n");
    } else if (peso <= 90) {
      printf("F\n");
    } else {
      printf("I\n");
    }
  }

  return 0;
}
