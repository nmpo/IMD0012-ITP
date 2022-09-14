/* Nathan e Theo - Aula 20: questão 09

9) Faça uma função que receba uma velocidade e um caractere. A velocidade  pode ser em km/h ou m/s,
o caractere pode ser K ou M. Se o caractere recebido for K, a função deverá chamar a função acima 
para converter de km/h para m/s.  Se o caractere recebido for M, deve ser o contrário. A função
deve  retornar o valor convertido conforme informado pelo usuário.   

*/

#include <stdio.h>

//função do tipo float que recebe uma velocidade M/S e retorna o resultado da operação
float conversao_kmh(float ms){
  return ms * 3.6;
}
//outra função do tipo float que recebe uma velocidade KM/H e retorna o resultado da operação
float conversao_ms(float kmh){
  return kmh / 3.6;
}
/*o objetivo dessa função é a entrada do caractere que corresponde à conversão desejada,
sendo chamada a função respectiva de tal conversão para se ter o retorno final */
float menu_conversao(float velocidade, char tipo_velocidade){
  if (tipo_velocidade == 'K') {
    return conversao_ms(velocidade);
  }else if (tipo_velocidade == 'M') {
    return conversao_kmh(velocidade);
  }
}


int main() {
  float velocidade;
  char tipo_velocidade;

  //entrada de dados: do valor número da velocidade
  printf("Digite a velocidade: ");
  scanf("%f", &velocidade);

  //entrada de dado: do tipo métrico da velocidade para saber qual conversão usar
  printf("Digite a conversão EM MAISCULO que deseja: 'K' para conversão km/h para m/s e 'M', para o inverso: ");
  scanf(" %c", &tipo_velocidade);

  //imprime o retorno da função da conversao desejada
  printf("A velocidade convertida é: %.2f\n", menu_conversao(velocidade, tipo_velocidade));

  return 0;
}

