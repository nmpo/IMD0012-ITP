#include "imagem.h"
#include "../fila/fila.h"
#include <stdlib.h>
#include <stdio.h>

Imagem criaImagem(char **parametros){
    Imagem imagem;
    int j;
    int dimX = atoi(parametros[0]);
    int dimY = atoi(parametros[1]);

    imagem.pixels = (Pixel **) malloc(dimX * sizeof(Pixel *));

    for(j = 0; j < dimX; j++){
        imagem.pixels[j] = (Pixel *) malloc(dimY * sizeof(Pixel));
    }

    imagem.dimX = dimX;
    imagem.dimY = dimY;

    return imagem;
}

/*
 * defineCor: Pinta um pixel
 * parametro *pixel: Ponteiro para um pixel
 * parametro r: Valor r do formato RGB
 * parametro g: Valor g do formato RGB
 * parametro b: Valor b do formato RGB
 * retorno: Devolve por referência o pixel pintado com a nova cor
 */
void pintaPixel(Imagem *imagem, int x, int y, int r, int g, int b){
    (*imagem).pixels[x][y].r = r;
    (*imagem).pixels[x][y].g = g;
    (*imagem).pixels[x][y].b = b;
}

int comparaCor(Pixel pixel1, Pixel pixel2){
    if(pixel1.r == pixel2.r && pixel1.g == pixel2.g && pixel1.b == pixel2.b)
        return 1;

    return 0;
}

void defineCor(Pixel *cor, int r, int g, int b){
    (*cor).r = r;
    (*cor).g = g;
    (*cor).b = b;
}

/*
 * clear: Preenche toda a imagem com uma cor especificada em rgb
 * parametro **image: Matriz de pixels que representa a imagem a ser gerada
 * parametro largura: largura da imagem
 * parametro altura: altura da imagem
 * parametro r: Valor r do formato RGB
 * parametro g: Valor g do formato RGB
 * parametro b: Valor b do formato RGB
 * retorno: Devolve por referência a matriz de pixels pintada com a nova cor especificada
 */
void clear(Imagem *imagem, int r, int b, int g){
    int i, j;

    /* Seta todas os pixels com a cor rgb especificada */
    for(i = 0; i < (*imagem).dimX; i++){
        for(j = 0; j < (*imagem).dimY; j++){
            pintaPixel(imagem, i, j, r, g, b);
        }
    }
}

void line(Imagem *imagem, Pixel cor, int x0, int y0, int x1, int y1) {
    int dx = abs(x1-x0), sx = x0<x1 ? 1 : -1;
    int dy = abs(y1-y0), sy = y0<y1 ? 1 : -1; 
    int err = (dx>dy ? dx : -dy)/2, e2;
    
    for(;;){
        pintaPixel(imagem, x0, y0, cor.r, cor.g, cor.b);

        if (x0==x1 && y0==y1) break;
        e2 = err;
        if (e2 >-dx) { err -= dy; x0 += sx; }
        if (e2 < dy) { err += dx; y0 += sy; }
    }
}

void desenhaPoligono(Imagem *imagem, char **parametros, Pixel cor){
    int i;
    int qntdPontos = atoi(parametros[0]);
    int pontos[qntdPontos][2];
    int ultimoPonto[1][2];
    int contador = 0;

    for(i = 2; i < qntdPontos * 2 + 1; i+=2){
        int pontox = atoi(parametros[i - 1]);
        int pontoy = atoi(parametros[i]);

        if(pontox == (*imagem).dimX){
            pontox--;
        }

        if(pontoy == (*imagem).dimY){
            pontoy--;
        }

        pontos[contador][0] = pontox;
        pontos[contador][1] = pontoy;
        contador++;
    }

    for(i = 0; i < qntdPontos - 1; i++){
        line(imagem, cor, pontos[i][0], pontos[i][1], pontos[i+1][0], pontos[i+1][1]);
        ultimoPonto[0][0] = pontos[i+1][0];
        ultimoPonto[0][1] = pontos[i+1][1];
    }

    line(imagem, cor, pontos[0][0], pontos[0][1], ultimoPonto[0][0], ultimoPonto[0][1]);
}

void salvarImagem(Imagem *imagem, char **parametros){
    int i, j;
    FILE *arquivo;

    /* Escrita de arquivo */
    arquivo = fopen(parametros[0], "w");

    fprintf(arquivo, "P3 \n");
    fprintf(arquivo, "%d %d \n", (*imagem).dimX, (*imagem).dimY);
    fprintf(arquivo, "255 \n");

    for (i = 0; i < (*imagem).dimY; i++){
        for (j = 0; j < (*imagem).dimX; j++){
            fprintf(arquivo, "%i ", (*imagem).pixels[j][i].r);
            fprintf(arquivo, "%i ", (*imagem).pixels[j][i].g);
            fprintf(arquivo, "%i\n", (*imagem).pixels[j][i].b);
        }
    }

    fclose(arquivo);
}

void baldeDeTinta(Imagem *imagem, Pixel cor, int inicio_x, int inicio_y){
    int altura = (*imagem).dimX;

    if(altura == 0 || altura == (*imagem).dimX - 1){
        return;
    }

    int largura = (*imagem).dimY;

    if(largura == 0 || largura == (*imagem).dimY - 1){
        return;
    }

    Pixel pixelInicial = (*imagem).pixels[inicio_x][inicio_y];

    if(comparaCor(pixelInicial, cor)){
        return;
    }

    Fila fila = criaFila();
    adicionaElemento(&fila, inicio_x, inicio_y);

    while(!estahVazio(&fila)){
        Noh *noh = retiraElemento(&fila);

        int x = noh->dados.posicaoCartesiana[0];
        int y = noh->dados.posicaoCartesiana[1];

        if(x < ((*imagem).dimX - 1) && comparaCor(pixelInicial, (*imagem).pixels[x + 1][y])){
            adicionaElemento(&fila, x + 1, y);
            pintaPixel(imagem, x + 1, y, cor.r, cor.g, cor.b);
        }

        if(x > 0 && comparaCor(pixelInicial, (*imagem).pixels[x - 1][y])){
            adicionaElemento(&fila, x - 1, y);
            pintaPixel(imagem, x - 1, y, cor.r, cor.g, cor.b);
        }

        if(y < ((*imagem).dimY - 1) && comparaCor(pixelInicial, (*imagem).pixels[x][y + 1])){
            adicionaElemento(&fila, x, y + 1);
            pintaPixel(imagem, x, y + 1, cor.r, cor.g, cor.b);
        }

        if(y > 0 && comparaCor(pixelInicial, (*imagem).pixels[x][y - 1])){
            adicionaElemento(&fila, x, y - 1);
            pintaPixel(imagem, x, y - 1, cor.r, cor.g, cor.b);
        }
    }
}

void desenhaCirculo(Imagem *imagem, int x0, int y0, int raio, Pixel cor){
    int f = 1 - raio;
    int ddF_x = 0;
    int ddF_y = -2 * raio;
    int x = 0;
    int y = raio;
 
    pintaPixel(imagem, x0, y0 + raio, cor.r, cor.g, cor.b);
    pintaPixel(imagem, x0, y0 - raio, cor.r, cor.g, cor.b);
    pintaPixel(imagem, x0 + raio, y0, cor.r, cor.g, cor.b);
    pintaPixel(imagem, x0 - raio, y0, cor.r, cor.g, cor.b);
 
    while(x < y) 
    {
        if(f >= 0) 
        {
            y--;
            ddF_y += 2;
            f += ddF_y;
        }
        x++;
        ddF_x += 2;
        f += ddF_x + 1;    
        pintaPixel(imagem, x0 + x, y0 + y, cor.r, cor.g, cor.b);
        pintaPixel(imagem, x0 - x, y0 + y, cor.r, cor.g, cor.b);
        pintaPixel(imagem, x0 + x, y0 - y, cor.r, cor.g, cor.b);
        pintaPixel(imagem, x0 - x, y0 - y, cor.r, cor.g, cor.b);
        pintaPixel(imagem, x0 + y, y0 + x, cor.r, cor.g, cor.b);
        pintaPixel(imagem, x0 - y, y0 + x, cor.r, cor.g, cor.b);
        pintaPixel(imagem, x0 + y, y0 - x, cor.r, cor.g, cor.b);
        pintaPixel(imagem, x0 - y, y0 - x, cor.r, cor.g, cor.b);
    }
}

void liberarEspacoPixels(Imagem *imagem){
    int i;

    for(i = 0; i < (*imagem).dimX; i++){
        free((*imagem).pixels[i]);
    }

    free((*imagem).pixels);
}