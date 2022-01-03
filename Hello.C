#include <stdio.h>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int total = 0;
	int* ptr = &arr[4];
	for (int i = 0; i < 5; i++)
	{
		total+=*ptr--;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("total: %d", total);
	return 0;
}