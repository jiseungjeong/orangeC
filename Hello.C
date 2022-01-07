#include <stdio.h>

void ShowArr(int ary[][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%3d ", ary[i][j]);
		printf("\n");
	}
	printf("\n");
}

//void Turn(int(*ary)[4])
//{
//	int ara[4][4] = { 0 };
//	int* ptr = ara;
//	for (int k = 0; k < 4; k++)
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			for (int j = 0; j < 4; j++)
//			{
//				ara[i][j] = ary[i][3 - j];
//			}
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			for (int j = 0; j < 4; j++)
//			{
//				ary[i][j] = ara[3 - j][3 - i];
//			}
//		}
//	}
//	(*ary)[4] = ptr;
//}
int main(void)
{
	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	int ara[4][4] = { 0 };
	ShowArr(arr);
	for (int k = 0; k < 4; k++)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				ara[i][j] = arr[i][3 - j];
			}
		}

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				arr[i][j] = ara[3-j][3-i];
			}
		}
	
		ShowArr(arr);
	}
	return 0;
}
