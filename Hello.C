#include <stdio.h>
int main(void)
{
	int num = 0, cnt=0;
	printf("Input any number: ");
	scanf("%d", &num);
	while (cnt < num)
	{
		printf("Hello World!\n");
		cnt++;
	}
	return 0;
}