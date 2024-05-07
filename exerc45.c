#include <stdio.h>
#include <math.h>

double hipotenusa(double CA, double CO)
{
	return sqrt((pow(CA, 2) + pow(CO, 2)));
}

int main(int argc, char const *argv[])
{
	printf("%lf \n", hipotenusa(3, 4));
	return 0;
}