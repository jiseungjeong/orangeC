#include <stdio.h>
int main(void)
{
	int num=0, result;
	scanf("%d", &num);
	result = ~num + 1;
	printf("result of this process: %d", result);
	return 0;
}