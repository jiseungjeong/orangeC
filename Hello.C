#include <stdio.h>
int main(void)
{
	int num=0, factorial=1;
	printf("input factorial number: ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		factorial *= i;
	}
	printf("factorial: %d\n", factorial);
	return 0;
}