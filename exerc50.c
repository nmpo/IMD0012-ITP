#include <stdio.h>
#include <math.h>

float milhas_em_km(float mi){
	return 1.61*mi;
}

int main()
{
	printf("%f \n \n", milhas_em_km(40));
	return 0;
}