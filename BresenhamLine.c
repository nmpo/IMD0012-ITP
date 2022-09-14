#include<stdio.h>
#include <stdlib.h>

const int linhas = 21;
const int colunas = 21;

char desenho[linhas][colunas];

/* Função que retorna -1, 0, 1, dependendo de x */
/* é x < 0, x = 0, x > 0 respectivamente */
int sign(int variavel){
  if (variavel>0){
    return 1;
  } else if (variavel<0){
    return -1;
  }
  return 0;  
}


/* Função para plotar um ponto */
void setPixel(int x, int y, char pixel) {

  // cuidado: 
  // matriz é [linha][coluna]
  // ponto (x,y) é coluna,linha 
  desenho[y][x]=pixel;

  // descomentar para debug
  //printf("%d %d\n",x,y);
}

/* Generalized Bresenham's Algorithm */
void bres_general(int x1, int y1, int x2, int y2){
  
  int dx, dy, x, y, d, s1, s2, swap=0, temp;

  //diferença no eixo X, dx = x final - x0 inicial
  dx = abs(x2 - x1);
  //diferença no eixo Y, dy = y final - y0 inicial
  dy = abs(y2 - y1);
  //vai ser -1, 0 ou 1 a depender do dx
  s1 = sign(x2-x1);
  //vai ser -1, 0 ou 1 a depender do dy
  s2 = sign(y2-y1);

  /* Verifica se dx ou dy tem um intervalo maior */
  /* se dy tiver um intervalo maior que dx, troque dx e dy */
  if(dy > dx){
    temp = dx; 
    dx = dy; 
    dy = temp; 
    swap = 1;
  }

  /* define o parâmetro de decisão inicial e o ponto inicial */
  d = 2 * dy - dx;
  x = x1; //uma espécie de x(zero)?
  y = y1; //uma espécie de y(zero)?

  for(int i = 1; i <= dx; i++) {
    //vai plotar no ponto (x,y) um caracter '*'
    setPixel(x,y,'*');
    
    while(d >= 0) {
      if(swap=1){
        x = x + s1;
      } else {
        y = y + s2;
        d = d - 2* dx;
      }
    }
    if(swap=1) 
      y = y + s2;
    else 
      x = x + s1;
    d = d + 2 * dy;
  }
  setPixel(x,y,'*');
}


int main(int argc, char **argv) {

  // preenche a matriz desenho com . (ponto)
  // so para garantir o conteudo
  for (int i = 0; i < linhas; ++i){
    for (int j = 0; j < colunas; ++j){
      desenho[i][j]='.';
    }
  }

  //OK:
  //BRES_general(x1, x2, y1, y2)
  //SETpixel(x, y, *)
  bres_general(0,0,20,20);
  //setPixel(0,0,'A');
  //setPixel(20,20,'B');
  
  //ERRO: bres_general(18,1,10,10);
  //OK: bres_general(18,2,10,10);

  //OK: 
  bres_general(2,10,15,3);
  //OK: bres_general(15,15,2,2);
  //OK: bres_general(15,2,2,15);

/*OK, ESSA PARTE É RESPONSÁVEL POR SUBSTITUIR A CADA COORDENADA O CARACTER ESPECIAL*/

  // imprime o resultado
  for (int i = 0; i < linhas; ++i){
    for (int j = 0; j < colunas; ++j){
      if (desenho[i][j]=='*'){ // se o pixel tiver * faz parte da reta
        printf("\u2588 "); // imprimi um quadrado no local do *
      } else {
        // imprime o bloco potilhado
        // printf("\u2591");
        printf("%c ", desenho[i][j]);
      }
    }
    printf("\n");
  }

  return 0;
}
