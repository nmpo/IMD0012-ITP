#include <stdio.h>
#include <string.h>

void soma(int *a, int b){
	*a += b;


}
int main(int argc, char const *argv[])
{
	int a = 2, b = 3;
	soma(&a, b);
	printf("%d e %d\n", a, b);
	return 0;
}