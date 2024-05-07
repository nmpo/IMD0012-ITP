#include <stdio.h>
#include <math.h>

#define pi 3.14

double volume_esfera(double raio){
	return (4.0/3.0)*pi*pow(raio, 3);
}

int main (){

	printf("%lf\n", volume_esfera(0));
	


	return 0;
}