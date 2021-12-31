#include <stdio.h>
int main(void)
{
	int num = 0, total=0;
	do
	{
		total += num;
		num += 2;
	} while (num<=100);
	printf("total: %d\n", total);
	return 0;
}