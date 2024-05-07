/* Nathan e Theo - Aula 20: questão 12

12) Faça uma função  que  receba  uma  distância  e  um  caractere.  A  distância pode ser  em  km
 ou  milhas, o  caractere  pode  ser  K  ou  M.  Se  o  caractere  recebido  for  K,  a  função
 deverá  chamar  a  função  acima  para  converter  de  km  para  milhas.  Se  o  caractere
 recebido  for  M,  deve  ser  o  contrário.  A  função  deve  retornar  o  valor  convertido
 conforme  informado  pelo  usuário.    

*/

#include <stdio.h>


//criamos uma função float para receber o parametro velocidade em MILHAS e converte-lo em quilometros
float conversao_km(float milhas){
  return milhas/1.61;
}
//criamos uma função float para receber o parametro velocidade em KM e converte-lo em milhas
float conversao_mil(float quilometros){
  return quilometros * 1.61;
}
//com as duas funções anteriores criadas, criamos uma função que retorna um float resultado
//da escolhe entre K ou M definido pelas duas funções respectivas de conversão
float menu_conversao(float distancia, char tipo_unidade){
  if(tipo_unidade == 'K') {
    return conversao_mil(distancia);
  } else if (tipo_unidade == 'M') {
    return conversao_km(distancia);
  }
}


int main() {
  float distancia;
  char tipo_unidade;

  //entrada de dados: parametro da distancia
  printf("Digite a distância para conversão: ");
  scanf("%f", &distancia);

  //qual conversão se deseja fazer a partir de um caractere de entrada
  printf("Agora, digite a unidade da distância a ser convertida: ");
  scanf(" %c", &tipo_unidade);

  //imprime o retorno da função menu conversão que tem os dois dados de entrada pelo usuario
  //como parametro
  printf("Resultado da conversão desejada: %.2f\n", menu_conversao(distancia, tipo_unidade));

  return 0;
}