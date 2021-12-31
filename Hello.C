#include <stdio.h>
int main(void)
{
	int num = 0, cnt=1;
	printf("Input any number: ");
	scanf("%d", &num);
	while (cnt <= num)
	{
		printf("%d ", cnt*3);
		cnt++;
	}
	return 0;
}