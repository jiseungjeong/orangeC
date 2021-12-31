#include <stdio.h>
int main(void)
{
	int total=0, inputNum=0, cnt=0,num=0;
	printf("How many numbers do you input: ");
	scanf("%d", &inputNum);
	while (cnt<inputNum)
	{
		printf("What number?: ");
		scanf("%d", &num);
		total += num;
		cnt++;
	}
	printf("average: %f", total / (double)inputNum);
	return 0;
}