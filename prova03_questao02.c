#include <stdio.h>

typedef struct{
	char operacao;
	int x;
	int y;
	int resultado;
}Calculadora;

void operMat(Calculadora calculo){
	int resultado = 0;
	if(calculo.char == '+'){
		resultado = calculo.x + calculo.y;
	}
	else if(calculo.char == '-'){
		resultado = calculo.x - calculo.y;
	}
	else if(calculo.char == '*'){
		resultado = calculo.x * calculo.y;
	}
	else if(calculo.char == '/'){
		resultado = calculo.x / calculo.y;
	}

	printf("%d", resultado);
}

int main(){
	Calculadora calculo;

	printf("Digite, separado por espaços, a operação desejada seguida do valor 1 e do valor 2: \n");
	scanf(" %c %d %d", &calculo.operacao, &calculo.x, &calculo.y);

	operMat(calculo);

	return 0;
}