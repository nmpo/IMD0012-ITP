/*Questão  2:  Você  está  fazendo  um  programa  de  gerenciamento  de  lojas  e  produtos.  Esta  
loja  já  tem  partes  de  um  sistema,  como  descrito  abaixo:  
  
 Seu  objetivo  é  completar  este  sistema  com  as  funções
 abaixo:  
  
1. Criar  os  tipos  necessários  para  o
funcionamento  dos  registros  acima.  Se  for   necessário,   os
registros   podem   ser   modificados   à   vontade,   mas   devem  
continuar  separados  em  Produtos  e  Lojas.  
2. Criar  uma  função  para  inserir  lojas.  
3. Criar  uma  função  para  inserir  produtos  em
uma  loja.  
4. Criar   uma   função   relatório,   que   deve
listar   todas   as   lojas   e   seus  respectivos  produtos 
cadastrados  (tendo  ele  em  estoque  ou  não).  
 */
#include <stdio.h>


typedef struct{
	int cod;
	char desc[50];
	float valor;
	int estoque;
} Produtos;

typedef struct{
	char nome[50];
	Produtos produtos[100];
	int qntdProdutos;
} Lojas;

void inserirLoja(int posicao, Lojas *listaLojas, Lojas novaLoja){
	listaLojas[posicao] = novaLoja;
}

void inserirProduto(int posicao, Lojas loja, Produtos novoProduto){
	loja.produtos[posicao] = novoProduto;
	loja.qntdProdutos++;
}

void relatorio(Lojas lojas, int qntdLojas){
	for(int i = 0; i < qntdLojas; i++){
		for(int j = 0; j < lojas[i].qntdProdutos; j++){
			printf("%s -> %s\n", lojas[i].nome, lojas[i].produtos[j].desc);
		}
	}
}

void precoMedio(Lojas lojas, int codigo){
	float valorTotal = 0;
	for(int i = 0; i < qntdLojas; i++){
		for(int j = 0; j < lojas[i].qntdProdutos; j++){
			if(lojas[i].produtos[j].cod == codigo){
				valorTotal += lojas[i].produtos[j].valor;
			}
		}
	}
}

int main(){
	Lojas redeVarejo[100];
	int qntdLojas = 0;

	Lojas novaLoja;

	inserirLoja(98, redeVarejo, novaLoja);

	return 0;
}