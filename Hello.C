#include <stdio.h>

int powerOfTwo(int num);

int main(void)
{
	int n = 0;
	printf("input integer n: ");
	scanf("%d", &n);
	printf("2 power %d is %d\n", n, powerOfTwo(n));
	return 0;
}

int powerOfTwo(int num)
{
	if (num == 0)
	{
		return 1;
	}
	num -= 1;
	return 2 * powerOfTwo(num);
}


