/* Nathan e Theo - Aula 10: questão 12

12) Escreva um programa  que receba   como  entrada o valor do saque realizado
pelo  cliente  de  um  banco e retorne  quantas  notas  de  cada valor  serão
necessárias  para atender ao saque com  a  menor quantidade de  notas  possível.
Serão  utilizadas notas de  100, 50, 20, 10, e 5 reais.  
  
	a.   Avisar   se   o   valor   informado   não   pode   ser   retirado   no
  caixa   e   solicitar  novamente  o  valor  (Exemplo:  R$102);
	b.   Não  exibir  resultado  “0”  para  um  tipo  de  nota  (Exemplo:  se  o
  valor  for  R$120, informar  somente  “1  de  R$100”  e  “1  de  R$20”);
*/

#include <stdio.h>


int main() {
  int nota100, nota50, nota20, nota10, nota5, saque, valor_invalido = 1;
  //criar um laço enquanto o valor da variável valor_invalido nao seja modificado para 0
  do {
    //entrada de dados paras variáveis
    printf("Digite o valor que deseja sacar: ");
    scanf("%d", &saque);
    //condição para que o valor seja válido e não permita valor com notas abaixo de 5 (múltiplos de 5)
    if (saque % 5 != 0)
      printf("Este valor não pode ser retirado. Por favor, digite um valor válido. \n");
    else{
      //divide o valor desejado por 100 o que dá o número de notas e o resto é atribuído de volta à variavel de saque
      nota100 = saque / 100;
      saque = saque % 100;

      //divide o valor desejado por 50 o que dá o número de notas e o resto é atribuído de volta à variavel de saque
      nota50 = saque / 50;
      saque = saque % 50;

      //divide o valor desejado por 20 o que dá o número de notas e o resto é atribuído de volta à variavel de saque
      nota20 = saque / 20;
      saque = saque % 20;

      //divide o valor desejado por 10 o que dá o número de notas e o resto é atribuído de volta à variavel de saque
      nota10 = saque / 10;
      saque = saque % 10;

      //divide o valor desejado por 5 o que dá o número de notas e o resto é atribuído de volta à variavel de saque
      nota5 = saque / 5;
      saque = saque % 5;

      //impressão da quantidade de cédulas sacadas
      printf(nota100 ? "%d de R$100\n" : "", nota100);
      printf(nota50 ? "%d de R$50\n" : "", nota50);
      printf(nota20 ? "%d de R$20\n" : "", nota20);
      printf(nota10 ? "%d de R$10\n" : "", nota10);
      printf(nota5 ? "%d de R$5\n" : "", nota5);

      //ao fim da contagem das cédulas atribui 0 ao valor_invalido para que seja interrompido o while
      valor_invalido = 0;
    }
  } while (valor_invalido);

  return 0;
}
