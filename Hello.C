#include <stdio.h>
int main(void)
{
	int num = -16;
	printf("the result of moving 2 blocks rightside: %d\n",num>>2);
	printf("the result of moving 3 blocks rightside: %d\n",num>>3);
	return 0;
}