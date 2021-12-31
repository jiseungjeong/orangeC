#include <stdio.h>
int main(void)
{
	int num1 = 0, num2 = 0, total=0;
	printf("input 2 numbers: ");
	scanf("%d %d", &num1, &num2);
	for (int i = num1; i <= num2; i++)
	{
		total += i;
	}
	printf("total: %d\n", total);
	return 0;
}