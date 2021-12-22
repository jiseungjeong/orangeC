#include <stdio.h>
int main(void)
{
	int num1, num2, num3, result;
	scanf("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("%d", result);
	return 0;
}