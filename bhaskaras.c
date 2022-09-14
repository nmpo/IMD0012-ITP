#include <stdio.h>
#include <math.h>

double bhakaras_positivo(double a, double b, double c){
	return (-b + sqrt(pow(b, 2) - 4*a*c))/(2*a);
}
double bhakaras_negativo(double a, double b, double c){
	return (-b - sqrt(pow(b, 2) - 4*a*c))/(2*a);
}

int main(){

	double a, b, c, d;
	printf("digite os termos a, b e c da sua equação de segundo grau: \n");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("A solução de x'= %.1lf e x''= %.1lf\n", bhakaras_positivo(a, b, c), bhakaras_negativo(a, b, c));

	return 0;
}