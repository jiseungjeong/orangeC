#include <stdio.h>

int powerOfTwo(int num);

int main(void)
{
	int n = 0, k;
	printf("input constant n: ");
	scanf("%d", &n);
	for (k = 0; powerOfTwo(k) < n; k++)
	{
		continue;
	}
	printf("the maximum of k satisfying the equation: %d", k);
	return 0;
}

int powerOfTwo(int num)
{
	int two = 1;
	for (int i = 0; i < num; i++)
	{
		two *= 2;
	}
	return two;
}


