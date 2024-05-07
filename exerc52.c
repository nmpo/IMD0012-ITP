#include <stdio.h>
#include <math.h>

double delta(double a, double b, double c){
	return pow(b, 2) - 4*a*c;
}

double bhaskaras_neg(double delta, double a, double b){
	return (-b -sqrt(delta(a, b, c)))/2*a;
}

int main(){

	double a, b, c, delta;
	printf("digite os termos a, b e c da sua equação de segundo grau: \n");
	scanf("%lf %lf %lf", &a, &b, &c);

	printf("%.1lf", bhaskaras_neg(delta(a, b, c), a, b));
}