#include <stdio.h>
#include <math.h>

int somatorio(int num){
	int result = 0;
	for (int i = 1; i <= num; i++)
		result+=i;
	return result;
}

int main()
{
	int n;
	printf("digite um valor N: \n");
	scanf("%d", &n);
	printf("a somatória é: %d \n", somatorio(n));

	return 0;

}