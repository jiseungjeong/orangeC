#include <stdio.h>
void OddPrint(int ptr[], int len)
{
	printf("print odd number: ");
	for (int i = 0; i < len; i++)
	{
		if (ptr[i] % 2==1)
		{
			printf("%d ", ptr[i]);
		}
		
	}
}

void EvenPrint(int ptr[], int len)
{
	printf("print even number: ");
	for (int i = 0; i < len; i++)
	{
		if (ptr[i] % 2 == 0)
		{
			printf("%d ", ptr[i]);
		}

	}
}

int main(void)
{
	int arr[10];
	printf("input totally 10 numbers\n");
	for (int i = 0; i < 10; i++)
	{
		printf("input: ");
		scanf("%d", &arr[i]);
	}
	OddPrint(arr, 10);
	printf("\n");
	EvenPrint(arr, 10);
	return 0;
}