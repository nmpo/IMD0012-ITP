/* Nathan e Theo - Aula 20: questão 01

1) Faça uma função e um programa de teste para o calculo do volume de uma  esfera. Sendo que o raio
é passado por parâmetro e o valor de π (pi) dever ser uma constante lida de um arquivo header (.h).  

*/

#include <stdio.h>
//é incluido a biblioteca matemática devido aos calculos contidos no programa
#include <math.h>
//fizemos o valor de pi atraves de um define em outro arquivo header 'aula20_ex01.h'
#include "aula20_ex01.h"

//por se tratar de numeros decimais, adotou-se uma função do tipo double
double volume_esfera(double raio){
	//é dado o retorno a fórmula matemática de volume de uma esfera
	return (4.0/3.0) * pi * pow(raio, 3);
}

int main() {
	double raio;
  	
	//entrada de dados necessarios para a função funcionar
	printf("Digite o raio da sua esfera: ");
	scanf("%lf", &raio);

	//impressao do retorno da nossa função
  	printf("O volume da sua esfera é: %lf\n", volume_esfera(raio));

  return 0;
}