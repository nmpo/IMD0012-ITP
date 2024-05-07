#include <stdio.h>
#include <math.h>

float km_em_milhas(float km){
	return km/1.61;
}

int main()
{
	printf("%f \n \n", km_em_milhas(65));
	return 0;
}