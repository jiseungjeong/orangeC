#include <stdio.h>
int main(void)
{
	int n = 0;
	printf("input n: ");
	scanf("%d", &n);
	n /= 10;
	switch (n)
	{
	case 0:
		printf("0 or more and less than 10");
		break;	
	case 1:
		printf("10 or more and less than 20");
		break;
	case 2:
		printf("20 or more and less than 30");
		break;
	default:
		printf("30 or more");
	}
	return 0;
}