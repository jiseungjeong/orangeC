#include <stdio.h>

int nextPibo(int num1, int num2);

int main(void)
{
	int num1 = 0, num2=1, cnt=0, interNum=0;
	printf("how much piboNum do you print? : ");
	scanf("%d", &cnt);
	printf("%d, %d", num1, num2);
	for (int i = 2; i < cnt; i++)
	{
		printf(", %d", nextPibo(num1, num2));
		interNum = num2;
		num2 = nextPibo(num1, num2);
		num1 = interNum;
	}

	return 0;
}

int nextPibo(int num1, int num2)
{
	return num1 + num2;
}

