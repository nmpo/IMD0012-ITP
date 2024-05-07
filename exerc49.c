#include <stdio.h>
#include <math.h>

float MparaK (float K){
	return K/3600;
}
float KparaM (float M){
	return M*3.6;
}

int main(int argc, char const *argv[])
{
	float kmh, ms;
	printf("digite a velocidade em km/h: \n");
	scanf("%f", &kmh);
	printf("isso é %.1f em m/s. \n", KparaM(kmh));
	printf("agora, digite a velocidade em m/s: \n");
	scanf("%f", &ms);
	printf("isso é %.1f em km/h. \n", MparaK(ms));

	return 0;
}