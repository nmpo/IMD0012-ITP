#include <stdio.h>


int main(int argc, char const *argv[])
{
	float v[5] = {1, 2, 3, 4};

	for (int i = 0; i < 5; ++i)
		printf("v[%d]: %p\n", i, &v[i]);
	return 0;
}