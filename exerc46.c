#include <stdio.h>
#include <math.h>

#define pi 3.14

double volume_cilindro(double h, double r)
{
	return pi*pow(r, 2)*h;
}

int main(int argc, char const *argv[])
{
	printf("%lf \n", volume_cilindro(10, 0.1));
	return 0;
}