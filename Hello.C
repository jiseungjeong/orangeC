#include <stdio.h>

void DesSort(int ary[], int len)
{
	int i, j;
	int temp;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < (len - i) - 1; j++)
		{
			if (ary[j] < ary[j + 1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}
int main(void)
{
	int arr[7];
	for (int i = 0; i < 7; i++)
	{
		printf("input: ");
		scanf("%d", &arr[i]);
	}
	DesSort(arr, 7);
	for (int i = 0; i < 7; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}