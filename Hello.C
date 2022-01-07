#include <stdio.h>

int main(void)
{
	int num = 0, i=1;
	int nowRow = 0, nowCol = 0;
	int arr[50][50] = {0};
	printf("input natural number: ");
	scanf("%d", &num);
	while (i != num * num+1)
	{
		while (nowCol < num && arr[nowRow][nowCol] == 0)
		{
			arr[nowRow][nowCol] = i;
			nowCol++;
			i++;
		}

		nowCol--;
		nowRow++;

		while (nowRow < num && arr[nowRow][nowCol] == 0)
		{
			arr[nowRow][nowCol] = i;
			nowRow++;
			i++;
		}

		nowRow--;
		nowCol--;

		while (nowCol >= 0 && arr[nowRow][nowCol]==0)
		{
			arr[nowRow][nowCol] = i;
			nowCol--;
			i++;
		}

		nowCol++;
		nowRow--;

		while (nowRow >= 0 && arr[nowRow][nowCol] == 0 )
		{
			arr[nowRow][nowCol] = i;
			nowRow--;
			i++;
		}
		nowRow++;
		nowCol++;
		//break;
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	

		
		
	
	return 0;
}
