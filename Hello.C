#include <stdio.h>
int main(void)
{
	int cnt=0, num=0, total=0;
	while (cnt<5)
	{
		printf("What number?: ");
		scanf("%d", &num);
		while (num<1)
		{
			printf("Input again, your input number is smaller than 1!\n");
			printf("What number?: ");
			scanf("%d", &num);
		}
		total += num;
		cnt++;
	}
	printf("total: %d", total);
	return 0;
}