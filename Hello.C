#include <stdio.h>

int primeDecision(int num);

int main(void)
{
	int primeNum = 10, cnt=0, targetNum=2;
	while (cnt < primeNum)
	{
		if (primeDecision(targetNum) == 1)
		{
			cnt++;
			printf("%d ", targetNum);
		}
		targetNum++;
	}
	return 0;
}

int primeDecision(int num)
{
	int divisorCnt = 0;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

