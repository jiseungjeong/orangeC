#include <stdio.h>

int main(void)
{
	int arr[10];
	int temp = 0;
	printf("totally 10 numbers input\n");
	for (int i = 0; i < 10; i++)
	{
		printf("input: ");
		scanf("%d", &arr[i]);
	}
	printf("printing of the array elements: ");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1)
		{
			printf("%d ", arr[i]);
		}
	}
	for (int i = 9; i >= 0; i--)
	{
		if (arr[i] % 2 == 0)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}