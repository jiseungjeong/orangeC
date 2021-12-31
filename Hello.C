#include <stdio.h>
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if ((10 * (i + j) + i + j) == 99)
				printf("A: %d, Z: %d\n", i, j);
		}
	}
	return 0;
}