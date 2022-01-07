#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int arr[3] = { 0 };
	int carr[3] = { 0 };
	int i = 0, strike = 0, ball = 0;
	printf("Start Game! \n");
srand((int)time(NULL));
for (int j = 0; j < 3; j++)
{
	carr[j] = rand() % 10;
	//printf("%d", carr[j]);
}

	while (strike!=3)
	{
		strike = 0, ball = 0;
		i++;
		printf("Select 3 numbers: ");
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
		for (int j = 0; j < 3; j++)
		{
			if (arr[j] == carr[j])
				strike++;
			for (int k = 0; k < 3; k++)
			{
				if (j != k && arr[j] == carr[k])
					ball++;
			}
		}
		printf("%d-th result: %dstrike, %dball!!\n", i, strike, ball);

	}
	printf("Game Over!");
	return 0;
}
