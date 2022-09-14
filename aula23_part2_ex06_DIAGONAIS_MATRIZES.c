/* Nathan e Theo - Aula 23 parte 2: questão 06

6) Inicialize  uma  matriz  de  5  x  5  elementos.    
	a.  Calcule  a  soma  dos  elementos  que  estão  acima  da  diagonal  principal.  
	b.  Calcule  a  soma  dos  elementos  que  estão  abaixo  da  diagonal  principal.  
	c.  Calcule  a  soma  dos  elementos  que  estão  na  diagonal  principal.  
	d.  Imprima  somente  os  números  que  estão  acima  da  diagonal  principal  (utilize  o  “\t”  
para  manter  o  formado  da  tabela,  conforme  exemplo  da  direita).  
	e.  Imprima  somente  os  números  que  estão  abaixo  da  diagonal  principal.  

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//variaveis para criação de uma matriz 5x5; conseguinte outras 3 para soma dos valores pedidos
    int matriz [5][5];
    int cima_dgprincipal=0;
    int baixo_dgprincipal=0;
    int soma_dgprincipal=0;

    //entrada de dados: é solicitado cada valores dos 25 elementos de uma matriz 5x5
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            printf("Digite o valor do elemento A(%d)(%d) da sua matriz: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    //no mesmo laço 'for', temos as condições de i > j para elementos abaixo da diagonal principal
    //que tem i igual a j, e para os elementos de j > i para elementos em cima da diagonal principal
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            if(j>i){			//se o indice da coluna (j) é MAIOR do que a da linha (i) e incrementa o valor do termo em caso positivo
                cima_dgprincipal=cima_dgprincipal+matriz[i][j];
            }
            else if(j<i){		//se o indice da coluna (j) é MENOR do que a da linha (i) e incrementa o valor do termo em caso positivo
                baixo_dgprincipal=baixo_dgprincipal+matriz[i][j];  
            }
            else if (j==i){		//se o indice da coluna (j) é IGUAL do que a da linha (i) e incrementa o valor do termo em caso positivo
                soma_dgprincipal=soma_dgprincipal+matriz[i][j];
            }
        }
    }
    
    //imprime os elementos que estão acima da diagonal principal
    for(int i = 0; i<5; i++){
        printf("\n");
        for(int j = 0; j<5; j++){
            if(j>i){
                printf("%d \t",matriz[i][j]);
            }
            else
                printf(" \t");
        }
    }

    //imprime os elementos que estão abaixo da diagonal principal
    for(int i = 0; i<5; i++){
        printf("\n");
        for(int j = 0; j<5; j++){
            if(j<i){
                printf("%d \t",matriz[i][j]);
            }
            else
                printf(" \t");
        }
    }
    printf("\n");


    return 0;
}
