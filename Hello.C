#include <stdio.h>

int main(void)
{
	int arr[5], total=0, max=0, min=0;
	for (int i = 0; i < 5; i++)
	{
		printf("input %d-th integer element: ", i);
		scanf("%d", &arr[i]);
		printf("\n");
	}

	max = arr[0];
	min = arr[0];
	for (int i = 0; i < 5; i++)
	{
		total += arr[i];

		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("max: %d\nmin: %d\ntotal: %d\n", max, min, total);
	return 0;
}

