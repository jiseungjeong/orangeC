#include <stdio.h>
int main(void)
{
	int num1, num2;
	int result1, result2;
	scanf("%d %d", &num1, &num2);
	result1 = num1 - num2;
	result2 = num1 * num2;
	printf("%d-%d=%d\n%dX%d=%d\n", num1, num2, result1,num1, num2, result2);
	return 0;
}