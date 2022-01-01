#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0, smallNum=0, gcd=0;
	printf("input 2 numbers: ");
	scanf("%d %d", &num1, &num2);
	smallNum = (num1 < num2) ? num1 : num2;
	for (int i = 2; i <= smallNum; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			gcd = i;
		}
	}
	printf("GCD: %d", gcd);
	return 0;
}

