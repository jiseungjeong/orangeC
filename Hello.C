#include <stdio.h>
int main(void)
{
	int num = -1, total=0;
	while (num!=0)
	{
		printf("Input any number: ");
		scanf("%d", &num);
		total += num;
	}
	printf("total: %d", total);
	return 0;
}