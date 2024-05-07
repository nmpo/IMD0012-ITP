#include <stdio.h>
#include <stdio.h>

int tipo_trian(int a, int b, int c){
	if(a==b && a==c)
		return 1;
	else if(a==b && a!=c || a==c && a!=b || b==c && a!=b)
		return 2;
	else if(a!=b && a!=b && b!=c)
		return 3; 
}

int main(){
	int CA, CO, H;
	char type_1[] = "equilatero";
	char type_2[] = "isoceles";
	char type_3[] = "escaleno";

	printf("Digite os três lado do seu triângulo: \n");
	scanf("%d %d %d", &CA, &CO, &H);

	int tipo;
	tipo = tipo_trian(CA, CO, H);
	printf("%d\n", tipo);
	//if(tipo_trian(CA, CO, H) ==1)
	//	printf("Seu triângulo é: %s\n", type_1);
	//else if(tipo_trian(CA, CO, H) ==2)
	//	printf("Seu triângulo é: %s\n", type_2);
	//else if(tipo_trian(CA, CO, H) ==3)
	//	printf("Seu triângulo é: %s\n", type_3);



	return 0;
}