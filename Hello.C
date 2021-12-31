#include <stdio.h>
int main(void)
{
	int total = 0, num = 1;
	while (num != 0)
	{
		printf("input integer number(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}
	printf("total: %d\n", total);
	return 0;
}