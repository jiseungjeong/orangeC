#include <stdio.h>

int main(void)
{
	int arr[5][5] = {0};
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("the score of %d-th subject of %d-th student: ", j, i);
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[4][j] += arr[i][j];
			arr[i][4] += arr[i][j];
			arr[4][4] += arr[i][j];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%-3d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}
