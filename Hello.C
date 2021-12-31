#include <stdio.h>
int main(void)
{
	int korScore = 0, engScore=0, mathScore = 0, average=0;
	printf("input your korean score, english score, and math score: ");
	scanf("%d %d %d", &korScore, &engScore, &mathScore);
	average = ((double)korScore + (double)engScore + (double)mathScore) / 3;
	if (average >= 90)
	{
		printf("Score: A");
	}
	else if (average >= 80)
	{
		printf("Score: B");
	}
	else if (average >=70)
	{
		printf("Score: C");
	}
	else if (average >= 50)
	{
		printf("Score: D");
	}
	else
	{
		printf("Score: F");
	}
	return 0;
}