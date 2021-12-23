#include <stdio.h>
int main(void)
{
	int num=3, result;
	result = num << 3;
	result = result >> 2;
	printf("result of this process: %d", result);
	return 0;
}