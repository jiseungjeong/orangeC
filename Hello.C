#include <stdio.h>

void gugudan(int startDan, int endDan);

int main(void)
{
	int num1 = 0, num2 = 0, bigNum = 0, smallNum=0;
	printf("input 2 numbers: ");
	scanf("%d %d", &num1, &num2);
	bigNum = (num1 > num2) ? num1 : num2;
	smallNum = (num1 < num2) ? num1 : num2;
	gugudan(smallNum, bigNum);
	return 0;
}

void gugudan(int startDan, int endDan)
{
	for (int i = startDan; i <= endDan; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d X %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}
