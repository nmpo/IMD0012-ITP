/* Nathan e Theo - Aula 20: questão 18

18) Faça  uma  função  que  receba  um  valor  de  massa  e  um  caractere.  O  valor  de
massa  pode  ser  em  quilogramas  ou  libras,  o  caractere  pode  ser  K  ou  L.  Se  o
caractere  recebido  for  K,  a  função  deverá  chamar  a  função  acima  para  converter
de  quilogramas para  libras.  Se  o  caractere  recebido  for  L,  deve  ser  o  contrário.
A  função  deve  retornar  o  valor  convertido  conforme  informado  pelo  usuário.

*/

#include <stdio.h>

//função float similiar a todas as outras de conversão de valores, onde recebemos o dado em kg
//e retornamos em libras
float conversao_lib(float kg){
  return kg / 0.45;
}
//função float similiar a todas as outras de conversão de valores, onde recebemos o dado em libras
//e retornamos em quilogramas
float conversao_kg(float lib){
  return lib * 0.45;
}
//a função float que contem as duas outras funções anteriores, será responsavel por receber
//o caractere que designará qual das conversões será feita
float menu_conversao(float massa, char unidade){
  if (unidade == 'K') {
    return conversao_lib(massa);
  }
  else if (unidade == 'L') {
    return conversao_kg(massa);
  }
}

int main() {
	int massa;
	char unidade;

	//entrada de dados: valor de massa a ser convertido
	printf("Digite um valor de massa: \n");
	scanf("%d", &massa);

	//entrada de dados: unidade massa caracteristico K ou L para a conversao ser realizada
	//pela função chamada que retornará a função de conversão respectiva da unidade digitada
	printf("Digite agora a unidade massa: \n");
	scanf(" %c", &unidade);

	//a partir dos dados de entrada, a função agora tem os valores de seus parametros para
	//retornar o pedido na função float menu de conversão a partir da letra digitada
	printf("%.2f\n", menu_conversao(massa, unidade));

  return 0;
}
