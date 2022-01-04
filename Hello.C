#include <stdio.h>

twoPower(int n)
{
	int two = 1;
	for (int i = 0; i < n; i++)
	{
		two *= 2;
	}
	return two;
}

maxTwoPower(int n)
{
	int i = 0;
	while (1)
	{
		if (twoPower(i) > n)
		{
			break;
		}
		i++;
	}
	return i-1;
}


int main(void)
{
	int num = 0, max=0;
	printf("decimal interger input: ");
	scanf("%d", &num);
	max = maxTwoPower(num);
	for (int i = max; i >= 0; i--)
	{
		if (num/twoPower(i)>0)
		{
			printf("1");
			num -= twoPower(i);
		}
		else
		{
			printf("0");
		}
	}

	return 0;
}