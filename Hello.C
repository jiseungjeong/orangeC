#include <stdio.h>
int main(void)
{
	int num = 9, dan=0;
	printf("Input dan: ");
	scanf("%d", &dan);
	while (num>0)
	{
		printf("%d X %d = %d\n", dan, num, dan * num);
		num--;
	}
	return 0;
}