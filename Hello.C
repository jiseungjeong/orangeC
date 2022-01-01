#include <stdio.h>
int smallestValue(int num1, int num2, int num3);
int main(void)
{
	int input1 = 0, input2 = 0, input3 = 0;
	printf("input 3 numbers: ");
	scanf("%d %d %d", &input1, &input2, &input3);
	printf("\nthe smallest value: ");
	printf("%d\n", smallestValue(input1, input2, input3));
	return 0;
}
int smallestValue(int num1, int num2, int num3)
{
	if (num1 < num2 && num1 < num3)
	{
		return num1;
	}
	else if (num2 < num3)
	{
		return num2;
	}
	else
		return num3;
}