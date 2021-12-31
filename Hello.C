#include <stdio.h>
int main(void)
{
	for (int i = 1; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 1; j < 10; j++)
			{
				if (j > i)
					break;
				printf("%d X %d = %d\n", i, j, i * j);
			}
		}
		printf("\n");
	}
	return 0;
}