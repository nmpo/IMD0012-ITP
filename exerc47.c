#include <stdio.h>
#include <math.h>

int main()
{
	double x,y;
	printf("digite dois numeros: \n");
	scanf("%lf %lf", &x, &y);
	printf("%lf \n", pow(x,y));


	double aux =x;
	for (int i = 1; i < y; ++i)
	{
		aux = aux * x;
		printf("%lf \n", aux);
	}
	return 0;
}