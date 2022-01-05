#include <stdio.h>

void MaxAndMin(int** dptr1, int** dptr2, int ary[])
{
	*dptr1 = &ary[0], *dptr2 = &ary[0];
	for (int i = 0; i < 5; i++)
	{
		if (**dptr1 < ary[i])
		{
			*dptr1 = &ary[i];
		}
		if (**dptr2 > ary[i])
		{
			*dptr2 = &ary[i];
		}
	}
}

int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5] = { 1,2,3,5,4 };
	MaxAndMin(&maxPtr, &minPtr, arr);
	printf("max: %d \nmin: %d", *maxPtr, *minPtr);
	return 0;
}
